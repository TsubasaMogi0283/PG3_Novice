#pragma once

enum SCENE {
	TITLE,
	STAGE,
	CLEAR,
};


class IScene {
public:


	//������
	virtual void Initialize()=0;

	//�X�V
	virtual void Update()=0;

	//�`��
	virtual void Draw()=0;

	//�f�X�g���N�^
	virtual ~IScene();


	//�V�[���ԍ��̃Q�b�^�[
	int GetSceneNo();


protected:
	static int sceneNo_;


};
