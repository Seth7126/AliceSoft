// 函数: sub_59f980
// 地址: 0x59f980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = arg1[1]

if (eax_4 == arg1[2])
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

int32_t var_14 = 0xffffffff

if (arg2 s>= 0)
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x4da637d, arg1[2] - eax_4)
    int32_t edx_2 = edx_1 s>> 4
    
    if (arg2 s< (edx_2 u>> 0x1f) + edx_2)
        var_14 = *(arg2 * 0x34c + arg1[1] + 0x330)

struct _EXCEPTION_REGISTRATION_RECORD** var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t i = 0
int32_t var_8_1 = 0

if (arg2 s>= 0)
    int32_t edi_1 = 0
    
    do
        int32_t eax_11 = arg3[1]
        int32_t* ecx_6 = *arg3
        
        if (ecx_6 == eax_11)
            sub_5a4220(&var_24, arg1[1] + edi_1)
        else
            while (*ecx_6 != i)
                ecx_6 = &ecx_6[1]
                
                if (ecx_6 == eax_11)
                    break
            
            if (ecx_6 == eax_11)
                sub_5a4220(&var_24, arg1[1] + edi_1)
        
        i += 1
        edi_1 += 0x34c
    while (i s<= arg2)

int32_t* edi_2 = arg1
int32_t* ebx

if (sub_59f880(edi_2, &var_24, var_14, arg3) != 0)
    int32_t eax_15
    int32_t edx_3
    edx_3:eax_15 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
    int32_t edx_4 = edx_3 s>> 4
    
    if (i s< (edx_4 u>> 0x1f) + edx_4)
        int32_t edi_3 = i * 0x34c
        int32_t edx_6
        
        do
            int32_t eax_19 = arg3[1]
            int32_t* ecx_12 = *arg3
            
            if (ecx_12 == eax_19)
                sub_5a4220(&var_24, arg1[1] + edi_3)
            else
                while (*ecx_12 != i)
                    ecx_12 = &ecx_12[1]
                    
                    if (ecx_12 == eax_19)
                        break
                
                if (ecx_12 == eax_19)
                    sub_5a4220(&var_24, arg1[1] + edi_3)
            
            i += 1
            int32_t eax_22
            int32_t edx_5
            edx_5:eax_22 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
            edi_3 += 0x34c
            edx_6 = edx_5 s>> 4
        while (i s< (edx_6 u>> 0x1f) + edx_6)
        edi_2 = arg1
    
    struct _EXCEPTION_REGISTRATION_RECORD** esi = var_24
    
    if (esi[0xcc] != 0xffffffff)
        esi[0xcc] = 0xffffffff
    
    int32_t ecx_20 = (var_20 - esi) s/ 0x34c
    
    if (ecx_20 s> 1)
        void* eax_27 = &esi[0x19f]
        int32_t i_2 = ecx_20 - 1
        int32_t i_1
        
        do
            int32_t ecx_21 = *eax_27
            
            if (ecx_21 != 0xffffffff && *(eax_27 - 0x34c) != ecx_21 && *(eax_27 - 0x67c) != ecx_21)
                *eax_27 = 0xffffffff
            
            eax_27 += 0x34c
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    sub_5a42e0(&arg1[1], &var_24)
    *edi_2 += 1
    ebx.b = 1
else
    ebx.b = 0

sub_5a4960(&var_24)
int32_t eax_28
eax_28.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_28
