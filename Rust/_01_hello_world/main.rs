use std::io;


fn main()
{
    println!("Hello World!");
    let mut strx = String::new();
    loop {
        io::stdin().read_line(&mut strx).expect("Error!");
        println!("Now strx = {}", strx);
    }

}