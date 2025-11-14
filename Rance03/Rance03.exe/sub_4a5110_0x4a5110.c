// 函数: sub_4a5110
// 地址: 0x4a5110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc9d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIComponentList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &partsengine::CGUIComponentList::`vftable'
int32_t var_4 = 2
sub_4a5510(arg1)
arg1[2] = 0
sub_4a62e0(arg1, sub_4e7600)
int32_t* eax_3 = arg1[7]
int32_t* i = *eax_3

if (i != eax_3)
    do
        int32_t* ecx_1 = i[5]
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                int32_t* i_3 = i[1]
                
                if (*(i_3 + 0xd) == 0)
                    while (i == i_3[2])
                        i = i_3
                        i_3 = i_3[1]
                        
                        if (*(i_3 + 0xd) != 0)
                            break
                
                i = i_3
            else
                i = i_1
                int32_t* i_2 = *i
                
                while (*(i_2 + 0xd) == 0)
                    i = i_2
                    i_2 = *i
    while (i != arg1[7])

arg1[9] = &partsengine::CPartsNumberManager::`vftable'
int32_t eax_5 = arg1[0xd]
arg1[0xe] = eax_5

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t** eax_6 = arg1[7]
sub_4200d0(&arg1[7], &var_10, *eax_6, eax_6)
j__free(arg1[7])
int32_t var_4_1 = 0xffffffff
arg1[4] = &partsengine::CAlphaClipperManager::`vftable'
void** vFunc_0 = arg1[5][1].vFunc_0
void** vFunc = vFunc_0

if (*(vFunc_0 + 0xd) == 0)
    do
        sub_420090(vFunc[2])
        vFunc = *vFunc
        j__free(vFunc_0)
        vFunc_0 = vFunc
    while (*(vFunc + 0xd) == 0)

void* eax_8 = arg1[5]
*(eax_8 + 4) = eax_8
int32_t* eax_9 = arg1[5]
*eax_9 = eax_9
void* eax_10 = arg1[5]
*(eax_10 + 8) = eax_10
arg1[6] = 0
int32_t** eax_11 = arg1[5]
sub_4200d0(&arg1[5], &var_10, *eax_11, eax_11)
int32_t result = j__free(arg1[5])
fsbase->NtTib.ExceptionList = ExceptionList
return result
