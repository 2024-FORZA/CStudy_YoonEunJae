int main() {

	int N;
	scanf("%d", &N);

	if (N == 1)
		return 0;

	int i = 2;
	while (N > 1) {
		if (N % i == 0) {
			N /= i;
			printf("%d\n", i);
		}
		else
			i++;
	}

	return 0;
}