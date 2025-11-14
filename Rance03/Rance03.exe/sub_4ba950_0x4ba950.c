// 函数: sub_4ba950
// 地址: 0x4ba950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bdc19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_44 = 0
char* edx = *(arg3 + 4)
uint32_t* result

if (&edx[4] u> *(arg3 + 8))
labelid_1:
    result.b = 0
else
    *(arg1 + 8) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    char* ecx_7 = *(arg3 + 4)
    
    if (&ecx_7[1] u> *(arg3 + 8))
    labelid_1:
        result.b = 0
    else
        result.b = *ecx_7 == 1
        *(arg1 + 0xc) = result.b
        *(arg3 + 4) += 1
        void* ecx_8 = *(arg3 + 4)
        
        if (ecx_8 + 1 u> *(arg3 + 8))
        labelid_1:
            result.b = 0
        else
            result.b = *ecx_8 == 1
            *(arg1 + 0xd) = result.b
            *(arg3 + 4) += 1
            
            if (sub_468bc0(arg3, arg1 + 0x10).b == 0)
            labelid_1:
                result.b = 0
            else if (sub_468bc0(arg3, arg1 + 0x14).b == 0)
            labelid_1:
                result.b = 0
            else
                uint32_t var_4c
                
                if (sub_468b20(arg3, arg1 + 0x18).b == 0)
                labelid_1:
                    result.b = 0
                else if (sub_468b20(arg3, &var_4c).b == 0)
                labelid_1:
                    result.b = 0
                else
                    *(arg1 + 0x1c) = var_4c
                    
                    if (sub_468ab0(arg3, arg1 + 0x20).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468ab0(arg3, arg1 + 0x21).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, arg1 + 0x24).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, arg1 + 0x2c).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, arg1 + 0x30).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, arg1 + 0x34).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, arg1 + 0x38).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, arg1 + 0x3c).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, arg1 + 0x40).b == 0)
                    labelid_1:
                        result.b = 0
                    else if (sub_468b20(arg3, &var_4c).b == 0)
                    labelid_1:
                        result.b = 0
                    else
                        *(arg1 + 0x44) = var_4c
                        
                        if (sub_468bc0(arg3, arg1 + 0x48).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468bc0(arg3, arg1 + 0x4c).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468bc0(arg3, arg1 + 0x50).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468bc0(arg3, arg1 + 0x54).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468bc0(arg3, arg1 + 0x58).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x5c).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x60).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x64).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x68).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x6c).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x70).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x74).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x78).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x7c).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, arg1 + 0x80).b == 0)
                        labelid_1:
                            result.b = 0
                        else if (sub_468b20(arg3, &var_4c).b == 0)
                        labelid_1:
                            result.b = 0
                        else
                            *(arg1 + 0x84) = var_4c
                            
                            if (sub_468ab0(arg3, arg1 + 0x88).b == 0)
                            labelid_1:
                                result.b = 0
                            else if (sub_468b20(arg3, arg1 + 0x8c).b == 0)
                            labelid_1:
                                result.b = 0
                            else if (sub_468b20(arg3, arg1 + 0x90).b == 0)
                            labelid_1:
                                result.b = 0
                            else if (sub_468b20(arg3, &var_4c).b == 0)
                            labelid_1:
                                result.b = 0
                            else
                                int32_t ebp_1 = 0
                                uint32_t var_48
                                
                                if (var_4c s> 0)
                                    do
                                        if (sub_468b20(arg3, &var_48).b == 0)
                                            goto label_4bb034_2
                                        
                                        sub_4158d0(arg1 + 0x94, &var_48)
                                        ebp_1 += 1
                                    while (ebp_1 s< var_4c)
                                
                                if (sub_468b20(arg3, arg1 + 0xa0).b == 0)
                                labelid_1:
                                    result.b = 0
                                else
                                    void* ecx_47
                                    result, ecx_47 = sub_468b20(arg3, arg1 + 0xa4)
                                    
                                    if (result.b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else
                                        void* var_68_39 = arg3
                                        void* ecx_49
                                        result, ecx_49 = sub_4be660(arg1 + 0x24c, ecx_47)
                                        
                                        if (result.b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else
                                            void* var_68_40 = arg3
                                            void* ecx_51
                                            result, ecx_51 = sub_4be660(arg1 + 0x268, ecx_49)
                                            
                                            if (result.b == 0)
                                            labelid_1:
                                                result.b = 0
                                            else
                                                void* var_68_41 = arg3
                                                void* ecx_53
                                                result, ecx_53 = sub_4bdee0(arg1 + 0x284, ecx_51)
                                                
                                                if (result.b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else
                                                    void* var_68_42 = arg3
                                                    void* ecx_55
                                                    result, ecx_55 =
                                                        sub_4bdee0(arg1 + 0x2a0, ecx_53)
                                                    
                                                    if (result.b == 0)
                                                    labelid_1:
                                                        result.b = 0
                                                    else
                                                        void* var_68_43 = arg3
                                                        void* ecx_57
                                                        result, ecx_57 =
                                                            sub_4bdee0(arg1 + 0x2bc, ecx_55)
                                                        
                                                        if (result.b == 0)
                                                        labelid_1:
                                                            result.b = 0
                                                        else
                                                            void* var_68_44 = arg3
                                                            void* ecx_59
                                                            result, ecx_59 =
                                                                sub_4bdee0(arg1 + 0x2d8, ecx_57)
                                                            
                                                            if (result.b == 0)
                                                            labelid_1:
                                                                result.b = 0
                                                            else
                                                                void* var_68_45 = arg3
                                                                void* ecx_61
                                                                result, ecx_61 =
                                                                    sub_4bdee0(arg1 + 0x2f4, ecx_59)
                                                                
                                                                if (result.b == 0)
                                                                labelid_1:
                                                                    result.b = 0
                                                                else
                                                                    void* var_68_46 = arg3
                                                                    void* ecx_63
                                                                    result, ecx_63 =
                                                                        sub_4bdee0(arg1 + 0x310, ecx_61)
                                                                    
                                                                    if (result.b == 0)
                                                                    labelid_1:
                                                                        result.b = 0
                                                                    else
                                                                        void* var_68_47 = arg3
                                                                        void* ecx_65
                                                                        result, ecx_65 =
                                                                            sub_4bdee0(arg1 + 0x32c, ecx_63)
                                                                        
                                                                        if (result.b == 0)
                                                                        labelid_1:
                                                                            result.b = 0
                                                                        else
                                                                            void* var_68_48 = arg3
                                                                            void* ecx_67
                                                                            result, ecx_67 =
                                                                                sub_4bdee0(arg1 + 0xd8, ecx_65)
                                                                            
                                                                            if (result.b == 0)
                                                                            labelid_1:
                                                                                result.b = 0
                                                                            else
                                                                                void* var_68_49 = arg3
                                                                                
                                                                                if (sub_4bdee0(arg1 + 0xf4, ecx_67).b
                                                                                    == 0)
                                                                                labelid_1:
                                                                                    result.b = 0
                                                                                else if (
                                                                                    sub_468b20(arg3, arg1 + 0x110).b == 0)
                                                                                labelid_1:
                                                                                    result.b = 0
                                                                                else
                                                                                    void* ecx_71
                                                                                    result, ecx_71 =
                                                                                        sub_468b20(arg3, arg1 + 0x114)
                                                                                    
                                                                                    if (result.b == 0)
                                                                                    labelid_1:
                                                                                        result.b = 0
                                                                                    else
                                                                                        void* var_68_52 = arg3
                                                                                        void* ecx_73
                                                                                        result, ecx_73 =
                                                                                            sub_4be660(arg1 + 0x118, ecx_71)
                                                                                        
                                                                                        if (result.b == 0)
                                                                                        labelid_1:
                                                                                            result.b = 0
                                                                                        else
                                                                                            void* var_68_53 = arg3
                                                                                            void* ecx_75
                                                                                            result, ecx_75 =
                                                                                                sub_4be660(arg1 + 0x134, ecx_73)
                                                                                            
                                                                                            if (result.b == 0)
                                                                                            labelid_1:
                                                                                                result.b = 0
                                                                                            else
                                                                                                void* var_68_54 = arg3
                                                                                                void* ecx_77
                                                                                                result, ecx_77 =
                                                                                                    sub_4be660(arg1 + 0x150, ecx_75)
                                                                                                
                                                                                                if (result.b == 0)
                                                                                                labelid_1:
                                                                                                    result.b = 0
                                                                                                else
                                                                                                    void* var_68_55 = arg3
                                                                                                    void* ecx_79
                                                                                                    result, ecx_79 =
                                                                                                        sub_4be660(arg1 + 0x16c, ecx_77)
                                                                                                    
                                                                                                    if (result.b == 0)
                                                                                                    labelid_1:
                                                                                                        result.b = 0
                                                                                                    else
                                                                                                        void* var_68_56 = arg3
                                                                                                        void* ecx_81
                                                                                                        result, ecx_81 =
                                                                                                            sub_4be660(arg1 + 0x188, ecx_79)
                                                                                                        
                                                                                                        if (result.b == 0)
                                                                                                        labelid_1:
                                                                                                            result.b = 0
                                                                                                        else
                                                                                                            void* var_68_57 = arg3
                                                                                                            void* ecx_83
                                                                                                            result, ecx_83 =
                                                                                                                sub_4bdee0(arg1 + 0x1a4, ecx_81)
                                                                                                            
                                                                                                            if (result.b == 0)
                                                                                                            labelid_1:
                                                                                                                result.b = 0
                                                                                                            else
                                                                                                                void* var_68_58 = arg3
                                                                                                                void* ecx_85
                                                                                                                result, ecx_85 =
                                                                                                                    sub_4be660(arg1 + 0x1c0, ecx_83)
                                                                                                                
                                                                                                                if (result.b == 0)
                                                                                                                labelid_1:
                                                                                                                    result.b = 0
                                                                                                                else
                                                                                                                    void* var_68_59 = arg3
                                                                                                                    void* ecx_87
                                                                                                                    result, ecx_87 =
                                                                                                                        sub_4be660(arg1 + 0x1dc, ecx_85)
                                                                                                                    
                                                                                                                    if (result.b == 0)
                                                                                                                    labelid_1:
                                                                                                                        result.b = 0
                                                                                                                    else
                                                                                                                        void* var_68_60 = arg3
                                                                                                                        void* ecx_89
                                                                                                                        result, ecx_89 =
                                                                                                                            sub_4be660(arg1 + 0x1f8, ecx_87)
                                                                                                                        
                                                                                                                        if (result.b == 0)
                                                                                                                        labelid_1:
                                                                                                                            result.b = 0
                                                                                                                        else
                                                                                                                            void* var_68_61 = arg3
                                                                                                                            void* ecx_91
                                                                                                                            result, ecx_91 =
                                                                                                                                sub_4be660(arg1 + 0x214, ecx_89)
                                                                                                                            
                                                                                                                            if (result.b == 0)
                                                                                                                            labelid_1:
                                                                                                                                result.b = 0
                                                                                                                            else
                                                                                                                                void* var_68_62 = arg3
                                                                                                                                
                                                                                                                                if (sub_4bdee0(arg1 + 0x230, ecx_91).b
                                                                                                                                    == 0)
                                                                                                                                labelid_1:
                                                                                                                                    result.b = 0
                                                                                                                                else if (sub_468b20(arg3, &var_4c).b
                                                                                                                                    == 0)
                                                                                                                                labelid_1:
                                                                                                                                    result.b = 0
                                                                                                                                else
                                                                                                                                    int32_t ebp_2 = 0
                                                                                                                                    *(arg1 + 0xac) = *(arg1 + 0xa8)
                                                                                                                                    
                                                                                                                                    if (var_4c s> 0)
                                                                                                                                        do
                                                                                                                                            if (sub_468b20(arg3, &var_48).b == 0)
                                                                                                                                                goto label_4bb034_2
                                                                                                                                            
                                                                                                                                            sub_4158d0(arg1 + 0xa8, &var_48)
                                                                                                                                            ebp_2 += 1
                                                                                                                                        while (ebp_2 s< var_4c)
                                                                                                                                    
                                                                                                                                    if (sub_468b20(arg3, &var_4c).b == 0)
                                                                                                                                    labelid_1:
                                                                                                                                        result.b = 0
                                                                                                                                    else
                                                                                                                                        int32_t ebp_3 = 0
                                                                                                                                        *(arg1 + 0xb8) = *(arg1 + 0xb4)
                                                                                                                                        
                                                                                                                                        if (var_4c s> 0)
                                                                                                                                            do
                                                                                                                                                if (sub_468b20(arg3, &var_48).b == 0)
                                                                                                                                                    goto label_4bb034_2
                                                                                                                                                
                                                                                                                                                sub_4158d0(arg1 + 0xb4, &var_48)
                                                                                                                                                ebp_3 += 1
                                                                                                                                            while (ebp_3 s< var_4c)
                                                                                                                                        
                                                                                                                                        if (sub_468ab0(arg3, arg1 + 0x410).b
                                                                                                                                            == 0)
                                                                                                                                        labelid_1:
                                                                                                                                            result.b = 0
                                                                                                                                        else if (
                                                                                                                                            sub_468ab0(arg3, arg1 + 0x411).b == 0)
                                                                                                                                        labelid_1:
                                                                                                                                            result.b = 0
                                                                                                                                        else if (
                                                                                                                                            sub_468ab0(arg3, arg1 + 0x412).b == 0)
                                                                                                                                        label_4bb034:
                                                                                                                                            result.b = 0
                                                                                                                                        else if (
                                                                                                                                            sub_468ab0(arg3, arg1 + 0x413).b == 0)
                                                                                                                                        label_4bb034_1:
                                                                                                                                            result.b = 0
                                                                                                                                        else
                                                                                                                                            int32_t eax_51 = arg2
                                                                                                                                            
                                                                                                                                            if (eax_51 s< 4)
                                                                                                                                                goto label_4bb015
                                                                                                                                            
                                                                                                                                            if (sub_468ab0(arg3, arg1 + 0x42c).b
                                                                                                                                                == 0)
                                                                                                                                            label_4bb034_2:
                                                                                                                                                result.b = 0
                                                                                                                                            else
                                                                                                                                                eax_51 = arg2
                                                                                                                                            label_4bb015:
                                                                                                                                                int32_t ebp_4 = 0
                                                                                                                                                
                                                                                                                                                while (true)
                                                                                                                                                    if (eax_51 s< 3)
                                                                                                                                                        var_4c = 0
                                                                                                                                                        
                                                                                                                                                        if (sub_468b20(arg3, &var_4c).b == 0)
                                                                                                                                                            goto label_4bb034_2
                                                                                                                                                        
                                                                                                                                                        uint32_t eax_55 = var_4c
                                                                                                                                                        void var_40
                                                                                                                                                        void var_28
                                                                                                                                                        char* eax_56
                                                                                                                                                        
                                                                                                                                                        if (eax_55 != 0)
                                                                                                                                                            uint32_t var_68_76 = eax_55
                                                                                                                                                            eax_56 = sub_4691f0(&var_40, "%05d")
                                                                                                                                                            ebx |= 2
                                                                                                                                                        else
                                                                                                                                                            eax_56 = sub_401f60(&var_28, 0x6da2a6)
                                                                                                                                                            ebx |= 1
                                                                                                                                                        
                                                                                                                                                        int32_t var_44_1 = ebx
                                                                                                                                                        sub_408340(*(arg1 + 0x414) + ebp_4, 
                                                                                                                                                            eax_56)
                                                                                                                                                        
                                                                                                                                                        if ((ebx.b & 2) != 0)
                                                                                                                                                            ebx &= 0xfffffffd
                                                                                                                                                            int32_t var_44_2 = ebx
                                                                                                                                                            sub_401fb0(&var_40)
                                                                                                                                                        
                                                                                                                                                        int32_t var_4 = 0xffffffff
                                                                                                                                                        
                                                                                                                                                        if ((ebx.b & 1) != 0)
                                                                                                                                                            ebx &= 0xfffffffe
                                                                                                                                                            int32_t var_44_3 = ebx
                                                                                                                                                            sub_401fb0(&var_28)
                                                                                                                                                    else if (sub_468d00(arg3, 
                                                                                                                                                            *(arg1 + 0x414) + ebp_4).b == 0)
                                                                                                                                                        goto label_4bb034_2
                                                                                                                                                    
                                                                                                                                                    ebp_4 += 0x18
                                                                                                                                                    
                                                                                                                                                    if (ebp_4 s>= 0x60)
                                                                                                                                                        for (uint32_t** i = nullptr; i s< 0x10; 
                                                                                                                                                                i = &i[1])
                                                                                                                                                            if (sub_468b20(arg3, &var_48).b == 0)
                                                                                                                                                                goto label_4bb034_2
                                                                                                                                                            
                                                                                                                                                            *(i + *(arg1 + 0x420)) = var_48
                                                                                                                                                        
                                                                                                                                                        *(arg1 + 4) = 1
                                                                                                                                                        result.b = 1
                                                                                                                                                        break
                                                                                                                                                    
                                                                                                                                                    eax_51 = arg2

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
