int main(){
    int size;
    cin >> size;
    int grade[size];
    for (int i = 0; i < size; i++){
        cin >> grade[i];
        int left = grade[i] % 5;
        if (grade[i] >= 38 && left > 2){
            grade[i] = grade[i] + (left % 2) + 1;
        }
        cout << grade[i] << endl;
    }
}
