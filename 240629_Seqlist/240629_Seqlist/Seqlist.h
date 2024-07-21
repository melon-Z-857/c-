#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include"Contact.h"

#define INIT_CAPACITY 4
//typedef int SLDataType;
typedef PeoInfo SLDataType;
// ��̬˳��� -- ��������
typedef struct SeqList
{
    SLDataType* arr;
    int size;     // ��Ч���ݸ���
    int capacity; // �ռ�����
}SL;

//��ʼ��������
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
//����
void SLCheckCapacity(SL* ps);

//ͷ������ɾ�� / β������ɾ��
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

//ָ��λ��֮ǰ����/ɾ������
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);
//int SLFind(SL* ps, SLDataType x);