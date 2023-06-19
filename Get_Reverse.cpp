#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
};

void printStudentsReversed(const std::vector<Student>& students) {
    for (int i = students.size() - 1; i >= 0; i--) {
        const Student& student = students[i];
        std::cout << student.name << " " << student.cls << " " << student.section << " "
                  << student.math_marks << " " << student.eng_marks << std::endl;
    }
}

int main() {
    int N;
    std::cin >> N;
    
    std::vector<Student> students(N);
    for (int i = 0; i < N; i++) {
        Student& student = students[i];
        std::cin >> student.name >> student.cls >> student.section
                 >> student.math_marks >> student.eng_marks;
    }
    
    printStudentsReversed(students);
    
    return 0;
}