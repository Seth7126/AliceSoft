// 函数: sub_43ab40
// 地址: 0x43ab40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b617b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IAFAFactory::afafactory::CAFAFactory::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &afafactory::CAFAFactory::`vftable'{for `IAFAFactory'}
int32_t var_4 = 0
int32_t* eax_3 = arg1[2]
int32_t* i = *eax_3

if (i != eax_3)
    do
        int32_t* ecx = i[5]
        
        if (ecx != 0)
            (*(*ecx + 4))(eax_2)
        
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
    while (i != arg1[2])

void** vFunc_1 = arg1[2]->vFunc_1
void** vFunc = vFunc_1

if (*(vFunc_1 + 0xd) == 0)
    do
        sub_420090(vFunc[2])
        vFunc = *vFunc
        j__free(vFunc_1)
        vFunc_1 = vFunc
    while (*(vFunc + 0xd) == 0)

void* eax_6 = arg1[2]
*(eax_6 + 4) = eax_6
int32_t* eax_7 = arg1[2]
*eax_7 = eax_7
void* eax_8 = arg1[2]
*(eax_8 + 8) = eax_8
arg1[3] = 0
int32_t** eax_9 = arg1[2]
sub_4200d0(&arg1[2], &var_10, *eax_9, eax_9)
int32_t result = j__free(arg1[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
