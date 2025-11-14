// 函数: sub_539700
// 地址: 0x539700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_20 = ebx
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_10 = 0
sub_42f4d0(&var_18, 0x400, &var_1c)
int32_t var_4 = 0
int32_t* ecx_1 = *(arg1 + 0x10)
int32_t ebp = var_18
int32_t* i = *ecx_1

if (i != ecx_1)
    do
        *(ebp + (i[4] << 2)) = i[5]
        
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
    while (i != *(arg1 + 0x10))

void* esi = *(arg1 + 4)

if (esi == *(arg1 + 8))
label_5397ec:
    ebx.b = 1
else
    while (true)
        if (sub_538f60(esi, &var_18, arg2).b == 0)
            ebx.b = 0
            break
        
        esi += 0x4c
        
        if (esi == *(arg1 + 8))
            goto label_5397ec

if (ebp != 0)
    j__free(ebp)

i.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return i
