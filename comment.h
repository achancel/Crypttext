/*private: char decryptC(char letter, int key)
* for (int i = 0; true; i++)
		{
			for (int i = 0; true; i++)
			{
				if (letter == ' ')
				{
					return letter;
				}
				else if (letter == engAlphabet[i])
				{
					if ((i - key) < 0)
					{
						letter = engAlphabet[i + engAlphabet->Length - key];
						return letter;
					}
					letter = engAlphabet[i - key];
					return letter;
				}
				else if (letter == slavAlphabet[i])
				{
					if ((i - key) < 0)
					{
						letter = slavAlphabet[i + slavAlphabet->Length - key];
						return letter;
					}
					letter = slavAlphabet[i - key];
					return letter;
				}
				else if
				(letter == numberAlphabet[0] || letter == numberAlphabet[1] || letter == numberAlphabet[2] || letter == numberAlphabet[3] || letter == numberAlphabet[4] || letter == numberAlphabet[5] ||
				 letter == numberAlphabet[6] || letter == numberAlphabet[7] || letter == numberAlphabet[8] || letter == numberAlphabet[9])
				{
					if ((i - key) < 0)
					{
						letter = numberAlphabet[i + numberAlphabet->Length - key];
						return letter;
					}
					letter = numberAlphabet[i - key];
					return letter;
				}
			}

  private: char encrypC(char letter, int key)
	{
		for (int i = 0; true ; i++)
		{
			if (letter == ' ')
			{
				return letter;
			}
			else if (letter == engAlphabet[i])
			{
				if ((i + key) > engAlphabet->Length)
				{
					letter = engAlphabet[i - engAlphabet->Length + key];

					return letter;
				}
				letter = engAlphabet[i + key];
				return letter;
			}
			else if (letter == slavAlphabet[i])
			{
				if ((i + key) > slavAlphabet->Length)
				{
					letter = slavAlphabet[i - slavAlphabet->Length + key];

					return letter;
				}
				letter = slavAlphabet[i + key];
				return letter;
			}
			else if
			(letter == numberAlphabet[0]|| letter == numberAlphabet[1]||
			letter == numberAlphabet[2] || letter == numberAlphabet[3]||
			letter == numberAlphabet[4] || letter == numberAlphabet[5]||
			letter == numberAlphabet[6] || letter == numberAlphabet[7]||
			letter == numberAlphabet[8] || letter == numberAlphabet[9])
				{
				if ((i + key) > numberAlphabet->Length)
				{
					letter = numberAlphabet[i - numberAlphabet->Length + key];
					return letter;
				}
				letter = (int(letter) + key)%10;
				return letter;
				}
		}
	}
			for (int i = 0; i < forConv.size(); i++)
		{
			forConv[i] = encrypC(forConv[i], key);
		}





*/