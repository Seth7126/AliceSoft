// 函数: sub_577c30
// 地址: 0x577c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ca88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_14 = arg3
int32_t var_18 = 0
int32_t* esi = arg5
int32_t var_8_1 = 0

if (edi != arg4 && esi != arg6)
    bool cond:0_1
    
    do
        char eax_3 = sub_576130(*esi, *edi)
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
int32_t var_2c
arg8 = sub_5772b0(arg8, edi, &var_2c, arg4, 0, 0)[4]
int32_t eax_15 = var_2c

if (eax_15 != 0)
    _free(eax_15)

if (arg9 == 0)
    int32_t var_48_1 = 0
    int32_t var_44_3 = 0
    void* var_40_4 = arg8
    arg8 = sub_5772b0(arg8, esi, &var_2c, arg6, 0, 0)[4]
    int32_t eax_19 = var_2c
    
    if (eax_19 != 0)
        _free(eax_19)

arg3[4] = arg8
*arg3 = 0
arg3[1] = 0
arg3[2] = 0
arg3[3] = 0

if (arg7 != 0)
    _free(arg7)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
