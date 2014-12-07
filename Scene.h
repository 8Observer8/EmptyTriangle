#ifndef SCENE_H
#define SCENE_H

#include <QGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>

class Scene : public QGLWidget, public QOpenGLFunctions
{
public:
    Scene( QWidget *parent = 0 );

private:
    void initializeGL();
    void paintGL();
    void resizeGL( int w, int h );

    QOpenGLShaderProgram *m_program;

    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;
};

#endif // SCENE_H
