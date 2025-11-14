// 函数: sub_486b00
// 地址: 0x486b00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6baab8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ecx

if (arg3 != 0)
    ecx = *(arg2 + 4)

uint32_t* result

if (arg3 == 0 || &ecx[4] u> *(arg2 + 8))
    result.b = 0
else
    uint32_t edi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg2 + 4) = &ecx[4]
    int32_t* var_34
    sub_448e90(&var_34, edi_7)
    int32_t var_4 = 0
    int32_t* ecx_2 = *(arg2 + 4)
    int32_t* ebp_1 = var_34
    void* ebx
    
    if (ecx_2 + edi_7 u> *(arg2 + 8))
        ebx.b = 0
    else
        sub_69d850(ebp_1, ecx_2, edi_7, eax_4)
        *(arg2 + 4) += edi_7
        
        if (*(arg1 + 0x38) != 0)
            sub_486ad0(&var_34)
        
        uint32_t* var_68_4 = arg3
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        char var_28 = 0
        int32_t var_30
        sub_488110(&var_28, ebp_1, var_30)
        var_4.b = 1
        result = *(arg2 + 4) + ((edi_7 + 3) & 0xfffffffc) - edi_7
        
        if (result u> *(arg2 + 8))
            ebx.b = 0
        else
            *(arg2 + 4) = result
            uint32_t var_48 = 0
            
            if (sub_468b20(arg2, &var_48).b == 0)
                ebx.b = 0
            else
                uint32_t var_44 = 0
                
                if (sub_468b20(arg2, &var_44).b == 0)
                    ebx.b = 0
                else
                    uint32_t edi_8 = var_44
                    
                    if (edi_8 s<= 0 || *(arg2 + 4) + edi_8 u> *(arg2 + 8))
                        ebx.b = 0
                    else
                        int32_t* var_40
                        sub_448e90(&var_40, edi_8)
                        var_4.b = 2
                        
                        if (sub_468dd0(arg2, var_40, edi_8) == 0)
                            ebx.b = 0
                            sub_403510(&var_40)
                        else if (sub_468a60(arg2, ((edi_8 + 3) & 0xfffffffc) - edi_8) == 0)
                            ebx.b = 0
                            sub_403510(&var_40)
                        else
                            uint32_t esi_1 = var_48
                            
                            if (*(arg1 + 0x38) != 0 && (esi_1 == 6 || esi_1 == 7))
                                sub_486ad0(&var_40)
                            
                            uint32_t* var_68_11 = arg3
                            int32_t** var_6c_4 = &var_40
                            
                            if (sub_486d40(arg1, esi_1, &var_28) == 0)
                                ebx.b = 0
                                sub_403510(&var_40)
                            else
                                ebx.b = 1
                                sub_403510(&var_40)
        
        if (var_14_1 u>= 0x10)
            j__free(var_28.d)
        
        int32_t var_14_2 = 0xf
        int32_t var_18_2 = 0
        var_28 = 0
    
    if (ebp_1 != 0)
        j__free(ebp_1)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
