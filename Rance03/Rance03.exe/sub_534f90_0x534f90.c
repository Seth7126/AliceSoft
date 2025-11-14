// 函数: sub_534f90
// 地址: 0x534f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3d28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t var_24 = 0
int32_t* esi = arg5
int32_t var_4 = 0

if (edi != arg4 && esi != arg6)
    bool cond:0_1
    
    do
        char eax_3 = sub_535480(*esi, *edi)
        int16_t top = top + 2
        void* ecx = arg8
        int32_t* edx = *(ecx + 4)
        
        if (eax_3 == 0)
            if (edx u>= *(ecx + 8))
                if (edx != 0)
                    *edx = *edi
                    ecx = arg8
                
                *(ecx + 4) += 4
                *(arg8 + 8) = *(ecx + 4)
            else
                *edx = *edi
                *(arg8 + 4) += 4
            
            edi = &edi[1]
            cond:0_1 = edi != arg4
        else if (edx u>= *(ecx + 8))
            if (edx != 0)
                *edx = *esi
                ecx = arg8
            
            *(ecx + 4) += 4
            esi = &esi[1]
            cond:0_1 = esi != arg6
            *(arg8 + 8) = *(ecx + 4)
        else
            int32_t eax_4 = *esi
            esi = &esi[1]
            *edx = eax_4
            *(arg8 + 4) += 4
            cond:0_1 = esi != arg6
    while (cond:0_1)

int32_t var_48 = 0
int32_t var_44_2 = 0
void* var_40_2 = arg8
int32_t var_20
void* eax_14 = sub_534c90(arg8, edi, &var_20, arg4, 0, 0)[4]
int32_t eax_15 = var_20

if (eax_15 != 0)
    j__free(eax_15)

int32_t var_48_1 = 0
int32_t var_44_3 = 0
void* var_40_4 = eax_14
sub_534c90(eax_14, esi, arg3, arg6, 0, 0)

if (arg7 != 0)
    j__free(arg7)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
