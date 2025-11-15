// 函数: sub_48de60
// 地址: 0x48de60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72f380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_8
int32_t* edi = arg_8
int32_t arg_c

if (*edi == edi[1])
    arg_8 = nullptr
    arg1[1] = *arg1
    int32_t* eax_5 = sub_48c850(arg1, &arg_c, *arg1, arg_c, &arg_8)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

int32_t i_2 = 0
int32_t var_4c_1 = arg_c
int128_t* var_38 = nullptr
int32_t var_34 = 0
int32_t var_30 = 0
sub_422540(&var_38, var_4c_1, &i_2)
int32_t var_8_1 = 0
int32_t i = 0
int32_t eax_8 = (edi[1] - *edi) s>> 2
i_2 = 0

if (eax_8 != 1)
    do
        int128_t* var_2c
        sub_4275f0(&var_2c, arg1)
        var_8_1.b = 1
        (*(**(*edi + (i << 2)) + 8))(&var_2c, arg_c)
        int128_t* ecx_6 = var_2c
        int32_t j = 0
        int128_t* eax_12 = ecx_6
        int128_t* edx_1 = var_38
        int32_t var_28
        uint32_t edi_4 = (var_28 - ecx_6 + 3) u>> 2
        
        if (ecx_6 u> var_28)
            edi_4 = 0
        
        int128_t* ecx_12
        
        if (edi_4 == 0)
            ecx_12 = var_2c
        else
            if (edi_4 u< 8)
                ecx_12 = var_2c
            else
                j = 0
                
                if (edx_1 u<= eax_12 + (edi_4 << 2) - 4)
                    ecx_12 = eax_12
                
                if (edx_1 u> eax_12 + (edi_4 << 2) - 4 || edx_1 - 4 + (edi_4 << 2) u< ecx_12)
                    do
                        j += 8
                        *edx_1 = _mm_add_ps(*eax_12, *edx_1)
                        float xmm1_3[0x4] = eax_12[1]
                        eax_12 = &eax_12[2]
                        edx_1[1] = _mm_add_ps(xmm1_3, edx_1[1])
                        edx_1 = &edx_1[2]
                    while (j != (edi_4 & 0xfffffff8))
                    
                    ecx_12 = var_2c
            
            if (j != edi_4)
                int32_t* eax_13 = eax_12 - edx_1
                
                do
                    j += 1
                    *edx_1 = *(eax_13 + edx_1) f+ *edx_1
                    edx_1 += 4
                while (j != edi_4)
                
                ecx_12 = var_2c
        
        var_8_1.b = 0
        
        if (ecx_12 != 0)
            int32_t var_24
            sub_403160(ecx_12, (var_24 - ecx_12) s>> 2, 4)
            var_2c = nullptr
            var_28 = 0
            var_24 = 0
        
        edi = arg_8
        i = i_2 + 1
        i_2 = i
    while (i u< eax_8 - 1)

(*(**(edi[1] - 4) + 8))(arg1, arg_c)
int128_t* ecx_16 = var_38
int128_t* eax_19 = ecx_16
int128_t* edx_2 = *arg1
int32_t i_1 = 0
uint32_t edi_8 = (var_34 - ecx_16 + 3) u>> 2

if (ecx_16 u> var_34)
    edi_8 = 0

if (edi_8 != 0)
    if (edi_8 u>= 8)
        arg_c = edx_2 - 4 + (edi_8 << 2)
        
        if (edx_2 u<= eax_19 + (edi_8 << 2) - 4)
            ecx_16 = eax_19
        
        if (edx_2 u> eax_19 + (edi_8 << 2) - 4 || arg_c u< ecx_16)
            do
                i_1 += 8
                *edx_2 = _mm_add_ps(*eax_19, *edx_2)
                float xmm1_7[0x4] = eax_19[1]
                eax_19 = &eax_19[2]
                edx_2[1] = _mm_add_ps(xmm1_7, edx_2[1])
                edx_2 = &edx_2[2]
            while (i_1 != (edi_8 & 0xfffffff8))
            
            ecx_16 = var_38
    
    if (i_1 != edi_8)
        eax_19 -= edx_2
        
        do
            i_1 += 1
            *edx_2 = *(eax_19 + edx_2) f+ *edx_2
            edx_2 += 4
        while (i_1 != edi_8)

if (ecx_16 != 0)
    eax_19 = sub_403160(ecx_16, (var_30 - ecx_16) s>> 2, 4)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_19
