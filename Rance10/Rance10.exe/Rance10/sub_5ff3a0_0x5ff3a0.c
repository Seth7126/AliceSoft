// 函数: sub_5ff3a0
// 地址: 0x5ff3a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74248e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1[2]
void* ecx = arg1[1]
void* var_24 = ecx
int32_t var_20 = eax_3
sub_621d30(ecx, eax_3)
int32_t var_8_1 = 0
int32_t i_2 = (*(*arg1 + 0x10))(eax_2)
int32_t i_1 = i_2

if (i_2 s> 0)
    int32_t* edi_1 = nullptr
    int32_t i
    
    do
        int32_t ecx_2 = arg1[-3]
        int32_t eax_5
        
        if (ecx_2 != 0)
            eax_5 = arg1[-4]
        else
            eax_5 = 0
        
        int32_t ebx_1 = *(edi_1 + eax_5 + 8)
        int32_t eax_6
        
        if (ecx_2 != 0)
            eax_6 = arg1[-4]
        else
            eax_6 = 0
        
        void* eax_7 = sub_6228d0(arg1[1], *(edi_1 + eax_6))
        
        if (eax_7 != 0)
            sub_629bc0(eax_7, arg1[2])
        
        if (ebx_1 != 0xffffffff)
            sub_621db0(arg1[1], ebx_1)
        
        edi_1 = &edi_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[-3] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_8_2 = 1
int32_t result = sub_621db0(ecx, eax_3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
