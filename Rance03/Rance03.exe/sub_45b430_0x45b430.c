// 函数: sub_45b430
// 地址: 0x45b430
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg3
void* var_5c = ebx
int32_t* ecx = *(arg2 + 0x1c)
int32_t edx = *(arg2 + 0x20)
int32_t* i = *ecx
*(arg2 + 0x24) = i

if (edx != 0 && i != ecx)
    void* edi_1 = &i[2]
    
    if (edi_1 != 0)
        do
            int32_t eax_5 = *(edi_1 + 0x1c)
            
            if (eax_5 != 2)
                eax_5.b = eax_5 == 0x1d
                char var_5d_1 = eax_5.b
                
                if (eax_5.b != 0)
                    if (edx == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                        edi_1 = nullptr
                    else
                        void* eax_8 = **(arg2 + 0x24)
                        *(arg2 + 0x24) = eax_8
                        
                        if (*(arg2 + 0x20) == 0 || eax_8 == *(arg2 + 0x1c))
                            edi_1 = nullptr
                        else
                            edi_1 = eax_8 + 8
                
                int32_t eax_9 = *(edi_1 + 0x1c)
                char var_58
                int32_t var_44_1
                
                if (eax_9 != 0x12 && eax_9 != 0x11)
                    var_44_1 = 0xf
                    int32_t var_48_1 = 0
                    var_58 = 0
                    sub_402110(&var_58, 0x6dbd8c, 0x2b)
                    int32_t var_4_2 = 0
                label_45b6bb:
                    sub_456ab0(*(arg1 + 4), &var_58, edi_1)
                    
                    if (var_44_1 u>= 0x10)
                        j__free(var_58.d)
                    
                    i.b = 0
                    goto label_45b668
                
                int32_t var_80_2 = 1
                char var_64 = 0x2e
                
                if (sub_4294e0(edi_1 + 4, &var_64, ecx) != 0xffffffff)
                    var_44_1 = 0xf
                    int32_t var_48_4 = 0
                    var_58 = 0
                    sub_402110(&var_58, 0x6dbd30, 0x29)
                    int32_t var_4_8 = 1
                    goto label_45b6bb
                
                void* eax_10
                void* ebx_2
                
                if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                    ebx_2 = nullptr
                else
                    eax_10 = **(arg2 + 0x24)
                    *(arg2 + 0x24) = eax_10
                    
                    if (*(arg2 + 0x20) == 0 || eax_10 == *(arg2 + 0x1c))
                        ebx_2 = nullptr
                    else
                        ebx_2 = eax_10 + 8
                
                if (ebx_2 == 0)
                    var_44_1 = 0xf
                    int32_t var_48_3 = 0
                    var_58 = 0
                    sub_402110(&var_58, 0x6dbd10, 0x1c)
                    int32_t var_4_7 = 2
                    goto label_45b6bb
                
                eax_10.b = *(ebx_2 + 0x1c) == 0xc
                var_64 = eax_10.b
                int32_t var_40
                int32_t* eax_19
                
                if (var_5d_1 != 0 && eax_10.b == 0)
                    int32_t* eax_18 = sub_4216c0(edi_1 + 4, 0x6dbd5c, &var_40, edi_1 + 4)
                    int32_t var_4_3 = 3
                    eax_19 = sub_410a80(eax_18.b, eax_18, &var_58, 0x6dbd88)
                    var_4_3.b = 4
                label_45b711:
                    sub_456ab0(*(arg1 + 4), eax_19, edi_1)
                    int32_t var_44
                    
                    if (var_44 u>= 0x10)
                        j__free(var_58.d)
                    
                    int32_t var_44_2 = 0xf
                    int32_t var_48_2 = 0
                    var_58 = 0
                    int32_t var_2c
                    
                    if (var_2c u< 0x10)
                        i.b = 0
                        goto label_45b668
                    
                    j__free(var_40)
                    i.b = 0
                    goto label_45b668
                
                void* eax_12 = sub_4612f0(var_5c, edi_1 + 4)
                struct exfile::CDefineData::VTable** eax_14
                
                if (eax_12 != 0)
                    eax_14.b = sub_460bd0(var_5c, edi_1 + 4)[2].b
                
                if (eax_12 != 0 && eax_14.b == 0)
                    int32_t* eax_21 = sub_4216c0(edi_1 + 4, 0x6dbe48, &var_40, edi_1 + 4)
                    int32_t var_4_4 = 5
                    eax_19 = sub_410a80(eax_21.b, eax_21, &var_58, 0x6dbe64)
                    var_4_4.b = 6
                    goto label_45b711
                
                struct exfile::CDefineData::VTable** eax_16 = sub_460bd0(var_5c, edi_1 + 4)
                eax_16[2].b = var_5d_1
                int32_t ecx_8 = *(ebx_2 + 0x1c)
                
                if (ecx_8 == 0xb)
                    i, ecx = sub_45b850(arg1, arg2, eax_16)
                    
                    if (i.b == 0)
                        sub_401f60(&var_40, 0x6dbe8c)
                        int32_t var_4 = 7
                    label_45b5d8:
                        sub_456ab0(*(arg1 + 4), &var_40, edi_1)
                        sub_401fb0(&var_40)
                        i.b = 0
                        goto label_45b668
                    
                    ebx = var_5c
                else if (ecx_8 != 5)
                    if (var_64 == 0)
                        void var_28
                        sub_401f60(&var_28, 0x6dbdb8)
                        int32_t var_4_6 = 0xa
                        sub_456ab0(*(arg1 + 4), &var_28, edi_1)
                        sub_401fb0(&var_28)
                        i.b = 0
                        goto label_45b668
                    
                    i, ecx = sub_45c520(arg1, arg2, eax_16, edi_1 + 4)
                    
                    if (i.b == 0)
                        sub_401f60(&var_40, 0x6dbde0)
                        int32_t var_4_5 = 9
                        goto label_45b5d8
                    
                    ebx = var_5c
                else
                    i, ecx = sub_45b940(arg1, arg2, eax_16)
                    
                    if (i.b == 0)
                        sub_401f60(&var_40, 0x6dbe68)
                        int32_t var_4_1 = 8
                        goto label_45b5d8
                    
                    ebx = var_5c
            else
                i, ecx = sub_45ccf0(arg1, arg2, ebx)
            
            if (*(arg2 + 0x20) == 0)
                break
            
            i = *(arg2 + 0x24)
            
            if (i == *(arg2 + 0x1c))
                break
            
            i = *i
            *(arg2 + 0x24) = i
            edx = *(arg2 + 0x20)
            
            if (edx == 0)
                break
            
            if (i == *(arg2 + 0x1c))
                break
            
            edi_1 = &i[2]
        while (i != 0xfffffff8)

i.b = 1
label_45b668:
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return i
