use std::io;

fn main() {
    let romanMile : f32 = 4854_f32;
    let englishMile : f32 = 5280_f32;

    let mut inText = String::new();
    let stdin = io::stdin();
    stdin.read_line(&mut inText);
    let trimmed = inText.trim();
    let i : f32 = trimmed.parse::<f32>().unwrap();
    println!("{}", (i*(englishMile/romanMile)*1000_f32 + 0.5_f32) as i32);
}
