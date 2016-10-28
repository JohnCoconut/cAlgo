float lgn(float n) {
	return log2(n);
}
float square(float n) {
	return sqrt(n);
}
float n(float n) {
	return n;
}
float nlgn(float n) {
	return n * log2(n);
}
float n2(float n) { 
	return n * n;
}
float n3(float n) {
	return n * n * n;
}
float two_pn(float n) {
	return pow(2, n);
}
float nfact(float n) {
	float factorial = 1;
	while (n > 0) {
		factorial *= n;
		n--;
	}
	return factorial;
}
