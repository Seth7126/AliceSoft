// 函数: sub_504900
// 地址: 0x504900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg3 + 4)
char* result

if (&edx[4] u> *(arg3 + 8))
labelid_1:
    result.b = 0
else
    *(arg1 + 4) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg3 + 4) += 4
    result = *(arg3 + 4)
    
    if (arg2 s< 0x1e)
        goto label_50498a
    
    if (&result[1] u> *(arg3 + 8))
    labelid_1:
        result.b = 0
    else
        bool cond:1_1 = *result == 1
        *(arg3 + 4) = &result[1]
        result.b = cond:1_1
        *(arg1 + 8) = result.b
    label_50498a:
        result = *(arg3 + 4)
        
        if (&result[1] u> *(arg3 + 8))
        labelid_1:
            result.b = 0
        else
            bool cond:0_1 = *result == 1
            *(arg3 + 4) = &result[1]
            result.b = cond:0_1
            *(arg1 + 9) = result.b
            result = *(arg3 + 4)
            
            if (&result[1] u> *(arg3 + 8))
            labelid_1:
                result.b = 0
            else
                bool cond:2_1 = *result == 1
                *(arg3 + 4) = &result[1]
                result.b = cond:2_1
                *(arg1 + 0xa) = result.b
                
                if (sub_6c9300(arg3, arg1 + 0xc).b == 0)
                labelid_1:
                    result.b = 0
                else if (sub_6c9300(arg3, arg1 + 0x10).b == 0)
                labelid_1:
                    result.b = 0
                else if (sub_61ec90(arg3, arg1 + 0x14).b == 0)
                labelid_1:
                    result.b = 0
                else if (arg2 s< 0xe)
                label_504a1e:
                    uint32_t var_30
                    
                    if (sub_61ec90(arg3, &var_30).b == 0)
                    labelid_1:
                        result.b = 0
                    else
                        *(arg1 + 0x20) = var_30
                        
                        if (arg2 s< 0xe)
                        label_504a56:
                            
                            if (sub_6c9280(arg3, arg1 + 0x26).b == 0)
                            labelid_1:
                                result.b = 0
                            else if (arg2 s< 0x1c)
                                *(arg1 + 0x27) = 1
                            label_504a9d:
                                
                                if (sub_6c9280(arg3, arg1 + 0x28).b == 0)
                                labelid_1:
                                    result.b = 0
                                else if (arg2 s< 0xc)
                                    *(arg1 + 0x29) = 0
                                label_504ac6:
                                    
                                    if (sub_61ec90(arg3, arg1 + 0x2c).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else if (sub_61ec90(arg3, arg1 + 0x34).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else if (sub_61ec90(arg3, arg1 + 0x38).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else if (sub_61ec90(arg3, arg1 + 0x3c).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else if (sub_61ec90(arg3, arg1 + 0x40).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else if (sub_61ec90(arg3, arg1 + 0x44).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else if (sub_61ec90(arg3, arg1 + 0x48).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else if (sub_61ec90(arg3, &var_30).b == 0)
                                    labelid_1:
                                        result.b = 0
                                    else
                                        *(arg1 + 0x4c) = var_30
                                        
                                        if (sub_6c9300(arg3, arg1 + 0x50).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else if (sub_6c9300(arg3, arg1 + 0x54).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else if (sub_6c9300(arg3, arg1 + 0x58).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else if (sub_6c9300(arg3, arg1 + 0x5c).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else if (sub_6c9300(arg3, arg1 + 0x60).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else if (arg2 s< 0xe)
                                        label_504c02:
                                            
                                            if (arg2 s< 0x19)
                                            label_504c75:
                                                
                                                if (sub_61ec90(arg3, arg1 + 0x88).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0x8c).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0x90).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0x94).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0x98).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0x9c).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0xa0).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0xa4).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0xa8).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, arg1 + 0xac).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else if (sub_61ec90(arg3, &var_30).b == 0)
                                                labelid_1:
                                                    result.b = 0
                                                else
                                                    *(arg1 + 0xb0) = var_30
                                                    
                                                    if (sub_61ec90(arg3, &var_30).b == 0)
                                                    labelid_1:
                                                        result.b = 0
                                                    else
                                                        *(arg1 + 0xb4) = var_30
                                                        
                                                        if (sub_6c9280(arg3, arg1 + 0xb8).b == 0)
                                                        labelid_1:
                                                            result.b = 0
                                                        else if (arg2 s>= 0x20)
                                                        label_504db5:
                                                            
                                                            if (sub_61ec90(arg3, arg1 + 0xbc).b
                                                                == 0)
                                                            labelid_1:
                                                                result.b = 0
                                                            else if (sub_61ec90(arg3, &var_30).b
                                                                == 0)
                                                            labelid_1:
                                                                result.b = 0
                                                            else
                                                                int32_t var_3c_1 = 0
                                                                uint32_t var_38
                                                                
                                                                if (var_30 s> 0)
                                                                    int32_t eax_55
                                                                    
                                                                    do
                                                                        if (sub_61ec90(arg3, &var_38).b == 0)
                                                                            goto label_504a73_2
                                                                        
                                                                        sub_404370(arg1 + 0xc0, &var_38)
                                                                        eax_55 = var_3c_1 + 1
                                                                        var_3c_1 = eax_55
                                                                    while (eax_55 s< var_30)
                                                                
                                                                if (sub_6c9280(arg3, arg1 + 0x124).b
                                                                    == 0)
                                                                labelid_1:
                                                                    result.b = 0
                                                                else if (
                                                                    sub_6c9280(arg3, arg1 + 0x125).b == 0)
                                                                labelid_1:
                                                                    result.b = 0
                                                                else
                                                                    char var_31
                                                                    
                                                                    if (sub_6c9280(arg3, arg1 + 0x126).b
                                                                        == 0)
                                                                    labelid_1:
                                                                        result.b = 0
                                                                    else if (sub_6c9250(arg3, &var_31).b
                                                                        == 0)
                                                                    labelid_1:
                                                                        result.b = 0
                                                                    else
                                                                        *(arg1 + 0x128) = zx.d(var_31)
                                                                        
                                                                        if (arg2 s< 0x12)
                                                                            *(arg1 + 0x12c) = 0
                                                                        label_504e92:
                                                                            
                                                                            if (arg2 s< 0x12)
                                                                                *(arg1 + 0x12d) = 0
                                                                            label_504f03:
                                                                                
                                                                                if (sub_6c9280(arg3, arg1 + 0x131).b
                                                                                    == 0)
                                                                                labelid_1:
                                                                                    result.b = 0
                                                                                else if (
                                                                                    sub_6c9280(arg3, arg1 + 0x194).b == 0)
                                                                                labelid_1:
                                                                                    result.b = 0
                                                                                else if (arg2 s< 0xf)
                                                                                    *(arg1 + 0x198) = 0
                                                                                label_504f53:
                                                                                    *(arg1 + 0x19c) = 0
                                                                                    
                                                                                    if (arg2 s< 0x14)
                                                                                    label_504f75:
                                                                                        void* i = arg1 + 0x134
                                                                                        
                                                                                        for (void* edi_2 = i + 0x60; 
                                                                                                i != edi_2; i += 0x18)
                                                                                            if (sub_61ed80(arg3, i).b == 0)
                                                                                                goto label_504a73_2
                                                                                        
                                                                                        if (arg2 s> 0x22)
                                                                                        label_504fb2:
                                                                                            void* esi_1
                                                                                            
                                                                                            if (arg2 s< 0x1a)
                                                                                                esi_1 = arg1
                                                                                            label_505007:
                                                                                                
                                                                                                if (arg2 s< 0x22)
                                                                                                label_505022:
                                                                                                    
                                                                                                    if (arg2 s< 0x24)
                                                                                                        result.b = 1
                                                                                                    else if (
                                                                                                        sub_6c9280(arg3, esi_1 + 0x1b9).b == 0)
                                                                                                    labelid_1:
                                                                                                        result.b = 0
                                                                                                    else
                                                                                                        result.b = 1
                                                                                                else
                                                                                                    if (sub_6c9280(arg3, esi_1 + 0x1b8).b
                                                                                                            != 0)
                                                                                                        goto label_505022
                                                                                                    
                                                                                                labelid_1:
                                                                                                    result.b = 0
                                                                                            else
                                                                                                int32_t var_18_1 = 0xf
                                                                                                int32_t var_1c_1 = 0
                                                                                                char var_2c = 0
                                                                                                int32_t var_8_1 = 0
                                                                                                
                                                                                                if (sub_61ed80(arg3, &var_2c) != 0)
                                                                                                    esi_1 = arg1
                                                                                                    sub_504330(esi_1, &var_2c)
                                                                                                    sub_403320(&var_2c)
                                                                                                    goto label_505007
                                                                                                
                                                                                                sub_403320(&var_2c)
                                                                                            labelid_1:
                                                                                                result.b = 0
                                                                                        else
                                                                                            if (sub_6c9230(arg3, 0x10).b != 0)
                                                                                                goto label_504fb2
                                                                                            
                                                                                        labelid_1:
                                                                                            result.b = 0
                                                                                    else
                                                                                        if (sub_6c9280(arg3, arg1 + 0x19c).b
                                                                                                != 0)
                                                                                            goto label_504f75
                                                                                        
                                                                                    labelid_1:
                                                                                        result.b = 0
                                                                                else
                                                                                    if (sub_61ec90(arg3, &var_38).b != 0)
                                                                                        *(arg1 + 0x198) = var_38
                                                                                        goto label_504f53
                                                                                    
                                                                                labelid_1:
                                                                                    result.b = 0
                                                                            else if (
                                                                                sub_6c9280(arg3, arg1 + 0x12d).b == 0)
                                                                            labelid_1:
                                                                                result.b = 0
                                                                            else if (
                                                                                sub_6c9280(arg3, arg1 + 0x12e).b == 0)
                                                                            labelid_1:
                                                                                result.b = 0
                                                                            else if (
                                                                                sub_6c9280(arg3, arg1 + 0x12f).b == 0)
                                                                            labelid_1:
                                                                                result.b = 0
                                                                            else
                                                                                if (sub_6c9280(arg3, arg1 + 0x130).b
                                                                                        != 0)
                                                                                    goto label_504f03
                                                                                
                                                                            labelid_1:
                                                                                result.b = 0
                                                                        else
                                                                            if (sub_6c9280(arg3, arg1 + 0x12c).b
                                                                                    != 0)
                                                                                goto label_504e92
                                                                            
                                                                        labelid_1:
                                                                            result.b = 0
                                                        else
                                                            if (sub_6c9230(arg3, 4).b != 0)
                                                                goto label_504db5
                                                            
                                                        labelid_1:
                                                            result.b = 0
                                            else if (sub_6c9280(arg3, arg1 + 0x74).b == 0)
                                            labelid_1:
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x78).b == 0)
                                            labelid_1:
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x7c).b == 0)
                                            labelid_1:
                                                result.b = 0
                                            else if (sub_61ec90(arg3, arg1 + 0x80).b == 0)
                                            labelid_1:
                                                result.b = 0
                                            else
                                                if (sub_61ec90(arg3, arg1 + 0x84).b != 0)
                                                    goto label_504c75
                                                
                                            labelid_1:
                                                result.b = 0
                                        else if (sub_61ec90(arg3, arg1 + 0x64).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else if (sub_61ec90(arg3, arg1 + 0x68).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else if (sub_61ec90(arg3, arg1 + 0x6c).b == 0)
                                        labelid_1:
                                            result.b = 0
                                        else
                                            if (sub_61ec90(arg3, arg1 + 0x70).b != 0)
                                                goto label_504c02
                                            
                                        labelid_1:
                                            result.b = 0
                                else
                                    if (sub_6c9280(arg3, arg1 + 0x29).b != 0)
                                        goto label_504ac6
                                    
                                labelid_1:
                                    result.b = 0
                            else
                                if (sub_6c9280(arg3, arg1 + 0x27).b != 0)
                                    goto label_504a9d
                                
                            labelid_1:
                                result.b = 0
                        else if (sub_6c9280(arg3, arg1 + 0x24).b == 0)
                        labelid_1:
                            result.b = 0
                        else
                            if (sub_6c9280(arg3, arg1 + 0x25).b != 0)
                                goto label_504a56
                            
                        label_504a73:
                            result.b = 0
                else if (sub_61ec90(arg3, arg1 + 0x18).b == 0)
                label_504a73_1:
                    result.b = 0
                else
                    if (sub_61ec90(arg3, arg1 + 0x1c).b != 0)
                        goto label_504a1e
                    
                label_504a73_2:
                    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
