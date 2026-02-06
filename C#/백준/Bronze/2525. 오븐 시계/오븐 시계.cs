namespace ConsoleApp4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int A = int.Parse(input[0]);
            int B = int.Parse(input[1]);
            int C = int.Parse(Console.ReadLine());

            B += C;
            if (B > 59)
            {
                int Plushour = B / 60;
                A = ((A + Plushour) > 24) ? (A + Plushour) - 24 : A+Plushour;
                B %= 60;
                if (A == 24)
                {
                    A = 0;
                }
            }
            
            Console.WriteLine($"{A} {B}");
        }
    }
}
