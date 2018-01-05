pipeline {
    agent any
    environment {
        CI = 'true' 
    }
    stages {
        stage('Build') {
            steps {
                sh 'bazel build -c opt ...'
            }
        }
        stage('Test') { 
            steps {
                sh 'bazel test -c opt ...'
            }
        }
    }
}
