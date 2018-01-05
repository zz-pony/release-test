pipeline {
    agent none
    environment {
        CI = 'true' 
    }
    stages {
        stage('Build') {
            steps {
                sh 'bazel_build.sh'
            }
        }
        stage('Test') { 
            steps {
                sh 'bazel_test.sh'
            }
        }
    }
}
