// 函数: sub_45ba10
// 地址: 0x45ba10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_14 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b82d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

while (true)
    int32_t ebp_1 = *(arg2 + 0x20)
    void* esi_2
    
    if (ebp_1 == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
        esi_2 = nullptr
    else
        void* eax_8 = **(arg2 + 0x24)
        *(arg2 + 0x24) = eax_8
        
        if (ebp_1 == 0 || eax_8 == *(arg2 + 0x1c))
            esi_2 = nullptr
        else
            esi_2 = eax_8 + 8
    
    char var_40
    int32_t var_2c
    int32_t var_28
    
    if (esi_2 == 0)
        var_2c = 0xf
        int32_t var_30_4 = 0
        var_40 = 0
        sub_402110(&var_40, 0x6dbf04, 0x1c)
        char* eax_30 = &var_40
        int32_t var_4_13 = 0
        
        if (var_2c u>= 0x10)
            eax_30 = var_40.d
        
        var_4_13.b = 1
        sub_403110(*(arg1 + 4) + 4, sub_410930(sub_455910(eax_30), &var_40, &var_28, \n"), nullptr, 
            0xffffffff)
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28)
        
        goto label_45bff6
    
    if (*(esi_2 + 0x1c) != 1)
        var_2c = 0xf
        int32_t var_30_3 = 0
        var_40 = 0
        sub_402110(&var_40, 0x6dbee4, 0x1c)
        int32_t var_4_12 = 2
    label_45bd90:
        sub_456ab0(*(arg1 + 4), &var_40, esi_2)
    label_45bff6:
        
        if (var_2c u>= 0x10)
            j__free(var_40.d)
    else
        void* ecx = esi_2 + 4
        int32_t ebx_1 = *(ecx + 0x10)
        char var_49_1 = 0
        
        if (*(esi_2 + 0x18) u>= 0x10)
            ecx = *ecx
        
        int32_t eax_9 = 3
        
        if (ebx_1 u< 3)
            eax_9 = ebx_1
        
        int32_t eax_10 = sub_405190(eax_9, 0x6dbf4c, ecx, eax_9)
        bool cond:2_1 = eax_10 == 0
        
        if (eax_10 == 0)
            if (ebx_1 u>= 3)
                eax_10.b = ebx_1 != 3
            else
                eax_10 = 0xffffffff
            
            cond:2_1 = eax_10 == 0
        
        eax_10.b = cond:2_1
        
        if (eax_10.b != 0)
            if (ebp_1 == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                esi_2 = nullptr
            else
                void* eax_13 = **(arg2 + 0x24)
                *(arg2 + 0x24) = eax_13
                
                if (*(arg2 + 0x20) == 0 || eax_13 == *(arg2 + 0x1c))
                    esi_2 = nullptr
                else
                    esi_2 = eax_13 + 8
            
            if (esi_2 == 0)
                var_2c = 0xf
                int32_t var_30_1 = 0
                var_40 = 0
                sub_402110(&var_40, 0x6dbf24, 0x27)
                int32_t var_4_1 = 3
                sub_456a00(*(arg1 + 4), &var_40)
                goto label_45bff6
            
            var_49_1 = 1
        
        int32_t ebx_2 = *(esi_2 + 0x14)
        int32_t ebp_2 = 0
        void* ecx_1
        
        if (*(esi_2 + 0x18) u< 0x10)
            ecx_1 = esi_2 + 4
        else
            ecx_1 = *(esi_2 + 4)
        
        int32_t eax_14 = 3
        
        if (ebx_2 u< 3)
            eax_14 = ebx_2
        
        int32_t eax_15 = sub_405190(eax_14, 0x6dbeb0, ecx_1, eax_14)
        bool cond:3_1 = eax_15 == 0
        
        if (eax_15 == 0)
            if (ebx_2 u>= 3)
                eax_15.b = ebx_2 != 3
            else
                eax_15 = 0xffffffff
            
            cond:3_1 = eax_15 == 0
        
        eax_15.b = cond:3_1
        
        if (eax_15.b == 0)
            if (sub_40c250(esi_2 + 4, "float") == 0)
                if (sub_40c250(esi_2 + 4, "string") != 0)
                    ebp_2 = 3
            else
                ebp_2 = 2
        else
            ebp_2 = 1
        
        if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
            esi_2 = nullptr
        else
            void* eax_20 = **(arg2 + 0x24)
            *(arg2 + 0x24) = eax_20
            
            if (*(arg2 + 0x20) == 0 || eax_20 == *(arg2 + 0x1c))
                esi_2 = nullptr
            else
                esi_2 = eax_20 + 8
        
        if (esi_2 == 0)
            var_2c = 0xf
            int32_t var_30_2 = 0
            var_40 = 0
            sub_402110(&var_40, 0x6dbeb4, 0x26)
            int32_t var_4_11 = 4
            sub_456a00(*(arg1 + 4), &var_40)
            goto label_45bff6
        
        int32_t eax_21 = *(esi_2 + 0x1c)
        
        if (eax_21 != 0x12 && eax_21 != 0x11)
            sub_401f60(&var_40, 0x6dc01c)
            int32_t var_4_2 = 5
            goto label_45bd90
        
        char eax_22 = sub_45ed50(arg3, esi_2 + 4)
        
        if (eax_22 != 0)
            sub_401f60(&var_40, 0x6dbff0)
            int32_t var_4_10 = 6
            goto label_45bd90
        
        if (var_49_1 != eax_22 && sub_45ee70(arg3) != 0)
            sub_401f60(&var_40, 0x6dc074)
            int32_t var_4_3 = 7
            goto label_45bd90
        
        struct exfile::CFormatData::VTable** eax_24 = sub_45eb40(arg3, esi_2 + 4)
        *(eax_24 + 5) = var_49_1
        void* esi_7
        
        if (*(arg2 + 0x20) == 0)
            esi_7 = nullptr
        else
            int32_t ecx_7 = *(arg2 + 0x1c)
            
            if (*(arg2 + 0x24) == ecx_7)
                esi_7 = nullptr
            else
                void* eax_26 = **(arg2 + 0x24)
                *(arg2 + 0x24) = eax_26
                
                if (*(arg2 + 0x20) == 0 || eax_26 == ecx_7)
                    esi_7 = nullptr
                else
                    esi_7 = eax_26 + 8
        
        if (esi_7 == 0)
            sub_401f60(&var_40, 0x6dc040)
            int32_t var_4_9 = 8
            sub_456a00(*(arg1 + 4), &var_40)
            goto label_45bff6
        
        result = *(esi_7 + 0x1c)
        
        if (result == 0xb)
            eax_24[1].b = 1
            
            if (var_49_1 != 0)
                sub_401f60(&var_40, 0x6dbf64)
                int32_t var_4_7 = 9
                sub_456ab0(*(arg1 + 4), &var_40, esi_7)
                sub_401fb0(&var_40)
            else if (sub_4665e0(arg2) == 0)
                sub_401f60(&var_40, 0x6dbf50)
                int32_t var_4_6 = 0xa
                sub_456a00(*(arg1 + 4), &var_40)
                sub_401fb0(&var_40)
            else if (sub_45dd20(arg1, eax_24, arg2, ebp_2).b != 0)
                result.b = *(eax_24 + 5)
                void* edx_2
                int32_t ebx_7
                int32_t esi_8
                
                if (result.b != 0)
                    edx_2 = arg3
                    esi_8 = 0
                    ebx_7 = (*(edx_2 + 8) - *(edx_2 + 4)) s>> 2
                
                if (result.b == 0 || ebx_7 s<= 0)
                label_45bcb6:
                    void* eax_29 = sub_4665e0(arg2)
                    
                    if (eax_29 == 0)
                        sub_401f60(&var_40, 0x6dbf8c)
                        int32_t var_4_5 = 0xc
                        sub_456a00(*(arg1 + 4), &var_40)
                        sub_401fb0(&var_40)
                    else
                        result = *(eax_29 + 0x1c)
                        
                        if (result == 6)
                            result.b = 1
                            break
                        
                        if (result == 4)
                            continue
                        else
                            sub_401f60(&var_40, 0x6dc170)
                            int32_t var_4 = 0xd
                            sub_456ab0(*(arg1 + 4), &var_40, eax_29)
                            sub_401fb0(&var_40)
                else
                    while (true)
                        void* eax_28
                        eax_28.b = *(sub_45efd0(edx_2, esi_8) + 5)
                        
                        if (eax_28.b != 0)
                            sub_401f60(&var_40, 0x6dbfcc)
                            int32_t var_4_4 = 0xb
                            sub_456a00(*(arg1 + 4), &var_40)
                            sub_401fb0(&var_40)
                            break
                        
                        edx_2 = arg3
                        esi_8 += 1
                        
                        if (esi_8 s>= ebx_7)
                            goto label_45bcb6
        else if (result == 4 || result == 6)
            eax_24[2] = ebp_2
            
            if (*(esi_7 + 0x1c) != 6)
                continue
            
            result.b = 1
            break
        else
            sub_401f60(&var_28, 0x6dc150)
            int32_t var_4_8 = 0xe
            sub_456ab0(*(arg1 + 4), &var_28, esi_7)
            sub_401fb0(&var_28)
    
    result.b = 0
    break

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
