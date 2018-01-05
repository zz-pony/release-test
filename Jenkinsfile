pipeline {
    agent none
    environment {
        CI = 'true' 
    }
    stages {
        stage('Build') {
            steps {
                bazel build -c opt ...
            }
        }
        stage('Test') { 
            steps {
                bazel test -c opt ...
            }
        }
    }
}
