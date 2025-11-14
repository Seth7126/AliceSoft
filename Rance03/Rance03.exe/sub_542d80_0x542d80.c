// 函数: sub_542d80
// 地址: 0x542d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
void* result

if (&edx[4] u> *(arg2 + 8))
    result.b = 0
else
    int32_t var_18_1 = 0xf
    *(arg1 + 0x10) = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) += 4
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_4 = 0
    void* ebx
    
    if (sub_468d00(arg2, &var_2c).b == 0)
    labelid_41:
        ebx.b = 0
    else
        int32_t var_68 = 0
        uint32_t var_64 = 0
        uint32_t var_60 = 0
        
        if (sub_468bc0(arg2, &var_68).b == 0)
        labelid_41:
            ebx.b = 0
        else if (sub_468bc0(arg2, &var_64).b == 0)
        labelid_41:
            ebx.b = 0
        else
            int32_t edx_1
            result, edx_1 = sub_468bc0(arg2, &var_60)
            
            if (result.b == 0)
            labelid_41:
                ebx.b = 0
            else
                sub_5441b0(&var_68, edx_1, arg1 + 0x2c, &var_68)
                
                if (sub_468bc0(arg2, arg1 + 0x44).b == 0)
                labelid_41:
                    ebx.b = 0
                else if (sub_468bc0(arg2, arg1 + 0x48).b == 0)
                labelid_41:
                    ebx.b = 0
                else if (sub_468bc0(arg2, arg1 + 0x4c).b == 0)
                labelid_41:
                    ebx.b = 0
                else if (sub_468bc0(arg2, arg1 + 0x50).b == 0)
                labelid_41:
                    ebx.b = 0
                else if (sub_468bc0(arg2, arg1 + 0x54).b == 0)
                labelid_41:
                    ebx.b = 0
                else if (sub_468bc0(arg2, arg1 + 0x58).b == 0)
                labelid_41:
                    ebx.b = 0
                else if (sub_468bc0(arg2, arg1 + 0x5c).b == 0)
                labelid_41:
                    ebx.b = 0
                else if (sub_468bc0(arg2, arg1 + 0x60).b == 0)
                labelid_41:
                    ebx.b = 0
                else
                    uint32_t var_6c
                    
                    if (sub_468bc0(arg2, arg1 + 0x64).b == 0)
                    labelid_41:
                        ebx.b = 0
                    else if (sub_468b20(arg2, &var_6c).b == 0)
                    labelid_41:
                        ebx.b = 0
                    else
                        sub_5441f0(arg1 + 0x68, var_6c)
                        
                        for (uint32_t* i = *(arg1 + 0x68); i != *(arg1 + 0x6c); i = &i[3])
                            if (sub_468bc0(arg2, i).b == 0)
                                goto label_543458_2
                            
                            if (sub_468bc0(arg2, &i[1]).b == 0)
                                goto label_543458_2
                            
                            if (sub_468bc0(arg2, &i[2]).b == 0)
                                goto label_543458_2
                        
                        if (sub_468b20(arg2, &var_6c).b == 0)
                        labelid_41:
                            ebx.b = 0
                        else
                            sub_544290(arg1 + 0x74, var_6c)
                            
                            for (uint32_t* i_1 = *(arg1 + 0x74); i_1 != *(arg1 + 0x78); 
                                    i_1 = &i_1[2])
                                if (sub_468bc0(arg2, i_1).b == 0)
                                    goto label_543458_2
                                
                                if (sub_468bc0(arg2, &i_1[1]).b == 0)
                                    goto label_543458_2
                            
                            if (sub_468bc0(arg2, arg1 + 0x80).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0x84).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0x88).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0x8c).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0x90).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0x94).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0x98).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0x9c).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0xa0).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0xa4).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0xa8).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0xac).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0xb0).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0xb4).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468bc0(arg2, arg1 + 0xb8).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468ab0(arg2, arg1 + 0xbc).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468ab0(arg2, arg1 + 0xbd).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468ab0(arg2, arg1 + 0xbe).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468ab0(arg2, arg1 + 0xbf).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else if (sub_468b20(arg2, &var_6c).b == 0)
                            labelid_41:
                                ebx.b = 0
                            else
                                sub_42f470(arg1 + 0xc0, var_6c)
                                
                                for (uint32_t* i_2 = *(arg1 + 0xc0); i_2 != *(arg1 + 0xc4); 
                                        i_2 = &i_2[1])
                                    if (sub_468b20(arg2, i_2).b == 0)
                                        goto label_543458_2
                                
                                if (sub_468ab0(arg2, arg1 + 0xcc).b == 0)
                                labelid_41:
                                    ebx.b = 0
                                else if (sub_468bc0(arg2, arg1 + 0x120).b == 0)
                                label_543458:
                                    ebx.b = 0
                                else if (sub_556ae0(arg1 + 0x124, arg2).b == 0)
                                label_543458_1:
                                    ebx.b = 0
                                else if (sub_556ae0(arg1 + 0x140, arg2).b == 0)
                                label_543458_2:
                                    ebx.b = 0
                                else
                                    int32_t var_48_1 = 0xf
                                    int32_t var_4c_1 = 0
                                    char var_5c = 0
                                    var_4.b = 1
                                    
                                    if (sub_468d00(arg2, &var_5c) != 0)
                                        int32_t var_30_1 = 0xf
                                        int32_t var_34_1 = 0
                                        char var_44 = 0
                                        var_4.b = 2
                                        
                                        if (sub_468d00(arg2, &var_44) == 0)
                                        labelid_9:
                                            ebx.b = 0
                                        else if (sub_468ab0(arg2, arg1 + 0x19c) == 0)
                                        labelid_9:
                                            ebx.b = 0
                                        else if (sub_468ab0(arg2, arg1 + 0x19d) == 0)
                                        labelid_9:
                                            ebx.b = 0
                                        else if (sub_468bc0(arg2, arg1 + 0x1a0) == 0)
                                        labelid_9:
                                            ebx.b = 0
                                        else if (sub_468b20(arg2, &var_6c) == 0)
                                        labelid_9:
                                            ebx.b = 0
                                        else
                                            sub_42f470(arg1 + 0x1b0, var_6c)
                                            
                                            for (uint32_t* i_3 = *(arg1 + 0x1b0); 
                                                    i_3 != *(arg1 + 0x1b4); i_3 = &i_3[1])
                                                if (sub_468b20(arg2, i_3) == 0)
                                                    goto label_543442_2
                                            
                                            if (sub_468bc0(arg2, arg1 + 0x1bc) == 0)
                                            labelid_9:
                                                ebx.b = 0
                                            else
                                                char var_6d
                                                
                                                if (sub_468b20(arg2, arg1 + 0x1cc) == 0)
                                                labelid_9:
                                                    ebx.b = 0
                                                else if (sub_468ab0(arg2, &var_6d) == 0)
                                                labelid_9:
                                                    ebx.b = 0
                                                else if (var_6d == 0)
                                                label_54339e:
                                                    
                                                    if (sub_468bc0(arg2, arg1 + 0x1ec) == 0)
                                                    labelid_9:
                                                        ebx.b = 0
                                                    else if (sub_468bc0(arg2, arg1 + 0x1f0) == 0)
                                                    labelid_9:
                                                        ebx.b = 0
                                                    else
                                                        char* esi_1 = arg1 + 0x1f4
                                                        
                                                        if (sub_468ab0(arg2, esi_1) == 0)
                                                        labelid_9:
                                                            ebx.b = 0
                                                        else if (sub_468ab0(arg2, arg1 + 0x1f5)
                                                            == 0)
                                                        labelid_9:
                                                            ebx.b = 0
                                                        else
                                                            var_6d = *esi_1
                                                            *esi_1 = 0
                                                            
                                                            if (sub_541410(arg1, &var_2c) == 0)
                                                            labelid_9:
                                                                ebx.b = 0
                                                            else if (*(arg1 + 0x24) == 0)
                                                                ebx.b = 1
                                                                *esi_1 = var_6d
                                                            else if (var_4c_1 == 0)
                                                            label_54341b:
                                                                
                                                                if (*(arg1 + 0x24) == 0
                                                                        || var_34_1 == 0)
                                                                    ebx.b = 1
                                                                    *esi_1 = var_6d
                                                                else if (sub_541840(arg1, &var_44) == 0)
                                                                labelid_9:
                                                                    ebx.b = 0
                                                                else
                                                                    ebx.b = 1
                                                                    *esi_1 = var_6d
                                                            else
                                                                if (sub_5416a0(arg1, &var_5c) != 0)
                                                                    goto label_54341b
                                                                
                                                            label_543442:
                                                                ebx.b = 0
                                                else if (sub_53e620(arg1) == 0)
                                                label_543442_1:
                                                    ebx.b = 0
                                                else
                                                    if (sub_547a70(*(arg1 + 0x1d0), arg2) != 0)
                                                        goto label_54339e
                                                    
                                                label_543442_2:
                                                    ebx.b = 0
                                        
                                        sub_401fb0(&var_44)
                                        sub_401fb0(&var_5c)
                                    else
                                        ebx.b = 0
                                        sub_401fb0(&var_5c)
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return result
