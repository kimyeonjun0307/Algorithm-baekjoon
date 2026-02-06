namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]);

            if ((B - 45) >= 0)
            {
                Console.WriteLine($"{A} {B - 45}");
            }
            else if ((B - 45) < 0)
            {
                if (A == 0)
                {
                    Console.WriteLine($"23 {60 + (B - 45)}");
                }
                else
                {
                    Console.WriteLine($"{A - 1} {60 + (B - 45)}");
                }
            }

        }
    }
}
