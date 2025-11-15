// 函数: sub_46d750
// 地址: 0x46d750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d492
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2[1] == arg2[2])
    sub_4170d0(arg2, 1)

char* ecx_1 = arg2[1]
char* var_18 = ecx_1
char* var_1c = ecx_1
int32_t var_8_1 = 0

if (ecx_1 != 0)
    sub_403360(ecx_1, 0x75ce42)

int32_t var_8_2 = 0xffffffff
arg2[1] += 0x18
int32_t esi = *arg2
int32_t* result
int32_t edx
edx:result = muls.dp.d(0x2aaaaaab, arg2[1] - esi)
int32_t edx_1 = edx s>> 2
int32_t* edi_6 = esi + ((edx_1 u>> 0x1f) - 1 + edx_1) * 0x18
int32_t* i

if (arg1[5] u< 0x10)
    i = arg1
else
    i = *arg1

for (void* ebx_2 = arg1[4] + i; i != ebx_2; i += 1)
    void* ecx_3
    ecx_3.b = *i
    
    if (ecx_3.b u< 0x81 || ecx_3.b u> 0x9f)
        result = ecx_3 + 0x20
    
    if ((ecx_3.b u>= 0x81 && ecx_3.b u<= 0x9f) || result.b u<= 0xf)
        result, ecx_3 = sub_407430(edi_6, i, 2)
        i += 1
    else if (ecx_3.b == 0x22)
        i += 1
        
        if (i != ebx_2)
            while (*i != 0x22)
                result, ecx_3 = sub_407430(edi_6, i, 1)
                
                if (*i == 0x5c)
                    i += 1
                    
                    if (i != ebx_2)
                        result, ecx_3 = sub_407430(edi_6, i, 1)
                
                i += 1
                
                if (i == ebx_2)
                    break
    else if (ecx_3.b != 0x2e)
        result, ecx_3 = sub_407430(edi_6, i, 1)
    else
        if (arg2[1] == arg2[2])
            sub_4170d0(arg2, 1)
        
        char* ecx_8 = arg2[1]
        char* var_1c_1 = ecx_8
        char* var_18_1 = ecx_8
        int32_t var_8_3 = 1
        
        if (ecx_8 != 0)
            sub_403360(ecx_8, 0x75ce43)
        
        int32_t var_8_4 = 0xffffffff
        arg2[1] += 0x18
        int32_t edi_8 = *arg2
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = muls.dp.d(0x2aaaaaab, arg2[1] - edi_8)
        int32_t edx_3 = edx_2 s>> 2
        result = ((edx_3 u>> 0x1f) + edx_3) * 3
        edi_6 = edi_8 + (result << 3) - 0x18

fsbase->NtTib.ExceptionList = ExceptionList
return result
