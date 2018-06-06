use own;
use own_array;
use nl;
use ptd;
use string;

def main::arr() {
	return own::arr(@main::element);
}

def main::element() {
	return own::rec({
		x => ptd::int(),
		y => ptd::int(),
	});
}

def main::main() {
	var arr : @main::arr = [];
	rep var i (1000000) {
		arr []= {x => i % 91, y => i % 103};
	}
	merge_sort(ref arr);
}

def merge_sort(ref arr : @main::arr) {
	merge_sort_aux(ref arr, 0, own_array::len(ref arr) - 1);
}

def merge_sort(ref arr : @main::arr, l : ptd::int(), r : ptd::int()) {
	return if (l == r);
	var mid = (l + r) / 2;
	merge_sort_aux(ref arr, l, mid);
	merge_sort_aux(ref arr, mid + 1, r);
	var tmp : @main::arr = [];
	var l_ptr = l;
	var r_ptr = mid + 1;
	rep var i (r-l+1) {
		if (r_ptr == r + 1 ||
				(l_ptr <= mid &&
					((arr[l_ptr]->y < arr[r_ptr]->y) ||
					(arr[l_ptr]->y == arr[r_ptr]->y && arr[l_ptr]->x < arr[r_ptr]->y))
				)) {
			tmp []= { x => arr[l_ptr]->x, y => arr[l_ptr]->y };
			l_ptr++;
		} else {
			tmp []= { x => arr[r_ptr]->x, y => arr[r_ptr]->y };
			r_ptr++;
		}
	}
	rep var i (r-l+1) {
		arr[l+i]->x = tmp[i]->x;
		arr[l+i]->y = tmp[i]->y;
	}
}
