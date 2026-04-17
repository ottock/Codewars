export function rps(p1: string, p2: string): string {
  switch (p1) {
    case "rock":
      if (p2 == "rock")
        return "Draw!";
      else if (p2 == "paper")
        return "Player 2 won!";
      else
        return "Player 1 won!";
​
    case "paper":
      if (p2 == "rock")
        return "Player 1 won!";
      else if (p2 == "paper")
        return "Draw!";
      else
        return "Player 2 won!";
​
    case "scissors":
      if (p2 == "rock")
        return "Player 2 won!";
      else if (p2 == "paper")
        return "Player 1 won!";
      else
        return "Draw!";
  }
​
  return "Invalid input";
}