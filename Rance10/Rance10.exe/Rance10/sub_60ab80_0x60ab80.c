// 函数: sub_60ab80
// 地址: 0x60ab80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742d60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_3c = arg2
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    void* ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    uint32_t var_40 = ebx_7
    
    if (ebx_7 s> 0)
        int32_t eax_5 = *(arg1 + 0x38)
        void* esi_1 = *(arg1 + 0x34)
        
        if (esi_1 != eax_5)
            do
                sub_60e680(esi_1)
                esi_1 += 0x6c
            while (esi_1 != eax_5)
            
            ebx_7 = var_40
        
        *(arg1 + 0x38) = *(arg1 + 0x34)
        int32_t var_94_2 = sub_60bfb0(arg1 + 0x34, ebx_7)
        var_40 = 0
        int32_t var_68
        sub_60c090(&var_68, &var_40)
        uint32_t eax_7 = 0
        int32_t var_8_1 = 0
        uint32_t var_38_1 = 0
        int32_t* var_64
        int32_t* var_44
        
        if (ebx_7 == 0)
        label_60ad20:
            int32_t* edi_2 = var_64
            
            for (void** i = *edi_2; i != edi_2; i = *i)
                sub_60c150(arg1 + 0x94, &var_44, &i[2])
                int32_t* edx_1 = var_44
                int32_t* eax_23 = edx_1
                uint32_t ecx_14 = var_40
                
                if (edx_1 != ecx_14)
                    do
                        eax_23 = *eax_23
                    while (eax_23 != ecx_14)
                
                sub_60c3c0(arg1 + 0x94, &var_3c, edx_1, ecx_14)
            
            ebx_7.b = 1
        else
            int32_t* esi_2 = nullptr
            
            while (true)
                if (sub_6011f0(*(arg1 + 0x34) + esi_2, var_3c, eax_7) == 0)
                    ebx_7.b = 0
                    break
                
                int32_t var_1c_1 = 0xf
                void** eax_11 = *(arg1 + 0x34) + 0x1c + esi_2
                int32_t var_20_1 = 0
                char var_30 = 0
                sub_403590(&var_30, eax_11, 0, 0xffffffff)
                uint32_t var_18_1 = var_38_1
                var_8_1.b = 1
                uint32_t var_94_4 = var_3c
                void* var_70
                int32_t ecx_9 = sub_60d120(arg1 + 0x94, &var_70, &var_30)
                var_8_1.b = 0
                
                if (var_1c_1 u>= 0x10)
                    ecx_9 = sub_403160(var_30.d, var_1c_1 + 1, 1)
                
                char var_6c
                
                if (var_6c == 0)
                    uint32_t var_94_5 = var_3c
                    void* var_78
                    ecx_9 = sub_60d320(&var_68, &var_78, *(arg1 + 0x34) + 0x1c + esi_2)
                
                uint32_t var_94_6 = var_3c
                var_44 = *(esi_2 + *(arg1 + 0x34))
                var_40 = var_38_1
                int32_t* var_98_6 = &var_44
                int32_t* var_80
                sub_435350(arg1 + 0xf4, &var_80, ecx_9)
                esi_2 = &esi_2[0x1b]
                eax_7 = var_38_1 + 1
                var_38_1 = eax_7
                
                if (eax_7 u>= ebx_7)
                    goto label_60ad20
        void* var_5c
        
        if (var_5c != 0)
            int32_t var_54
            sub_403160(var_5c, (var_54 - var_5c) s>> 2, 4)
            int32_t var_5c_1 = 0
            int32_t var_58_1 = 0
            int32_t var_54_1 = 0
        
        sub_60cf10(&var_64)
        sub_403160(var_64, 1, 0x20)
        result.b = ebx_7.b
    else
        result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
