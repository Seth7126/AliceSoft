// 函数: sub_5ff1b0
// 地址: 0x5ff1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74245e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1[2]
void* ecx = arg1[1]
void* var_20 = ecx
int32_t var_1c = eax_3
sub_621d30(ecx, eax_3)
int32_t var_8_1 = 0
int32_t eax_4 = sub_5ff020(&arg1[-8], arg2, arg3)
arg3 = eax_4
void* ebx

if (eax_4 s< 0)
    ebx.b = 1
else
    int32_t ecx_2 = arg1[3]
    
    if (eax_4 s< ecx_2)
        arg1[3] = ecx_2 - 1
        eax_4 = arg3
    
    arg1[4] -= 1
    int32_t ecx_3
    
    if (arg1[-3] != 0)
        ecx_3 = arg1[-4]
    else
        ecx_3 = 0
    
    int32_t edi_2 = eax_4 * 0xc
    int32_t eax_6 = *(edi_2 + ecx_3 + 8)
    int32_t eax_7
    
    if (arg1[-3] != 0)
        eax_7 = arg1[-4]
    else
        eax_7 = 0
    
    void* eax_8 = sub_6228d0(arg1[1], *(edi_2 + eax_7))
    
    if (eax_8 != 0)
        sub_629bc0(eax_8, arg1[2])
    
    if (eax_6 != 0xffffffff)
        sub_621db0(arg1[1], eax_6)
    
    int32_t ecx_8 = (*(*arg1 + 0x10))(eax_2) - 1
    
    if (arg3 s< ecx_8)
        arg3 = ecx_8 - arg3
        int32_t i
        
        do
            int32_t eax_13
            
            if (arg1[-3] != 0)
                eax_13 = arg1[-4]
            else
                eax_13 = 0
            
            int32_t eax_14 = *(edi_2 + eax_13 + 0x14)
            int32_t eax_15
            
            if (arg1[-3] != 0)
                eax_15 = arg1[-4]
            else
                eax_15 = 0
            
            int32_t edx_1 = *(edi_2 + eax_15 + 0x10)
            int32_t eax_16
            
            if (arg1[-3] != 0)
                eax_16 = arg1[-4]
            else
                eax_16 = 0
            
            int32_t eax_17
            
            if (arg1[-3] != 0)
                eax_17 = arg1[-4]
            else
                eax_17 = 0
            
            *(edi_2 + eax_17) = *(edi_2 + eax_16 + 0xc)
            int32_t eax_18
            
            if (arg1[-3] != 0)
                eax_18 = arg1[-4]
            else
                eax_18 = 0
            
            *(edi_2 + eax_18 + 4) = edx_1
            int32_t eax_19
            
            if (arg1[-3] != 0)
                eax_19 = arg1[-4]
            else
                eax_19 = 0
            
            *(edi_2 + eax_19 + 8) = eax_14
            edi_2 += 0xc
            i = arg3
            arg3 -= 1
        while (i != 1)
    
    int32_t eax_20 = arg1[-2]
    int32_t edi_4 = arg1[-3] - 0xc
    
    if (edi_4 u< eax_20)
        arg1[-3] = edi_4
        ebx.b = 1
    else
        uint32_t dwBytes = eax_20 + edi_4
        arg1[-2] = dwBytes
        
        if (eax_20 == neg.d(edi_4))
            arg1[-3] = edi_4
            ebx.b = 1
        else
            int32_t lpMem = arg1[-4]
            int32_t eax_21
            
            if (lpMem == 0)
                eax_21 = HeapAlloc(data_7fcbf4, HEAP_NONE, dwBytes)
            else
                eax_21 = HeapReAlloc(data_7fcbf4, HEAP_NONE, lpMem, dwBytes)
            
            arg1[-4] = eax_21
            
            if (eax_21 != 0)
                arg1[-3] = edi_4
                ebx.b = 1
            else
                ebx.b = 0

int32_t var_8_2 = 2
sub_621db0(ecx, eax_3)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
