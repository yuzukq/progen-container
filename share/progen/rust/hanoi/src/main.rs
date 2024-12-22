use std::io;

fn hanoi(n: i32, from: char, to: char, via: char) {
    if n > 1 {
        hanoi(n - 1, from, via, to);
        println!("{}: -> {}",from, to);
        hanoi(n - 1, via, to, from);
    } else {
        println!("{}: -> {}",from, to);
    }
}

fn main() {
    let mut n = String::new();
    io::stdin().read_line(&mut n).ok();

    let num = n.trim().parse().ok().unwrap();

    hanoi(num, 'A', 'C', 'B');
}
