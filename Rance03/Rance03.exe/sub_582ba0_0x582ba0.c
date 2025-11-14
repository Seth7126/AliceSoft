// 函数: sub_582ba0
// 地址: 0x582ba0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c73b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = nullptr
int32_t var_1c = 0
int32_t* edx = sub_4a6eb0()
var_20 = edx
int32_t var_c_1 = 0
int32_t* ecx = *(arg1 + 4)
int32_t* i = *ecx

if (i != ecx)
    do
        sub_582740(i[5], &var_20)
        
        if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
    while (i != *(arg1 + 4))
    
    edx = var_20

int32_t* i_1 = *edx
int32_t result = 0

while (i_1 != edx)
    int32_t* ebx_1 = *(i_1[4] + 0x10)
    int32_t eax_4
    
    if (ebx_1 != 0)
        int32_t eax_6 = (*(*ebx_1 + 0x10))(eax_2)
        int32_t eax_7
        void* ecx_4
        eax_7, ecx_4 = (*(*ebx_1 + 0x14))()
        edx = var_20
        eax_4 = int.d(_mm_cvtepi32_ps(zx.o((eax_6 * eax_7) << 2)) * 1.5f)
    else
        eax_4 = 0
    
    result += eax_4
    
    if (*(i_1 + 0xd) == 0)
        int32_t* i_5 = i_1[2]
        
        if (*(i_5 + 0xd) != 0)
            int32_t* i_7 = i_1[1]
            
            if (*(i_7 + 0xd) == 0)
                while (i_1 == i_7[2])
                    i_1 = i_7
                    i_7 = i_7[1]
                    
                    if (*(i_7 + 0xd) != 0)
                        break
            
            i_1 = i_7
        else
            i_1 = i_5
            int32_t* i_6 = *i_1
            
            while (*(i_6 + 0xd) == 0)
                i_1 = i_6
                i_6 = *i_1

void var_24
sub_4200d0(&var_20, &var_24, *edx, edx)
j__free(var_20)
fsbase->NtTib.ExceptionList = ExceptionList
var_4
return result
