// 函数: sub_5540a0
// 地址: 0x5540a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_WPADI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
uint32_t ebx
uint32_t var_c0 = ebx
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x2f5) = arg3
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_8_1 = 0
void* var_40 = nullptr
int32_t var_3c = 0
int32_t var_38 = 0
var_8_1.b = 1

if (sub_61ed80(arg2, &var_2c).b == 0)
labelid_9:
    ebx.b = 0
else
    char* ecx_1 = *(arg2 + 4)
    
    if (&ecx_1[4] u> *(arg2 + 8))
    labelid_9:
        ebx.b = 0
    else
        uint32_t edi_7 =
            ((zx.d(ecx_1[3]) << 8 | zx.d(ecx_1[2])) << 8 | zx.d(ecx_1[1])) << 8 | zx.d(*ecx_1)
        *(arg2 + 4) = &ecx_1[4]
        uint32_t var_30
        
        if (sub_61ec90(arg2, &var_30).b == 0)
        labelid_9:
            ebx.b = 0
        else
            ebx = 0
            uint32_t var_34
            
            if (var_30 s> 0)
                do
                    if (*(arg2 + 4) + 4 u> *(arg2 + 8))
                        goto label_554435_2
                    
                    char* edx_2 = *(arg2 + 4)
                    uint32_t ecx_9 =
                        ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8
                        | zx.d(*edx_2)
                    *(arg2 + 4) = &edx_2[4]
                    var_34 = ecx_9
                    sub_404370(&var_40, &var_34)
                    ebx += 1
                while (ebx s< var_30)
            
            int32_t edx_3 = *(arg2 + 8)
            
            if (*(arg2 + 4) + 4 u> edx_3)
            labelid_9:
                ebx.b = 0
            else
                char* ecx_11 = *(arg2 + 4)
                ebx = ((zx.d(ecx_11[3]) << 8 | zx.d(ecx_11[2])) << 8 | zx.d(ecx_11[1])) << 8
                    | zx.d(*ecx_11)
                *(arg2 + 4) = &ecx_11[4]
                
                if (&ecx_11[5] u> edx_3)
                labelid_9:
                    ebx.b = 0
                else
                    bool cond:0_1 = ecx_11[4] == 1
                    *(arg2 + 4) = &ecx_11[5]
                    uint32_t var_80
                    uint32_t var_74
                    
                    if (sub_61ec90(arg2, &var_80).b == 0)
                    labelid_9:
                        ebx.b = 0
                    else
                        uint32_t var_70
                        
                        if (sub_61ec90(arg2, &var_74).b == 0)
                        labelid_9:
                            ebx.b = 0
                        else
                            uint32_t var_64
                            
                            if (sub_61ec90(arg2, &var_70).b == 0)
                            labelid_9:
                                ebx.b = 0
                            else
                                uint32_t var_68
                                
                                if (sub_61ec90(arg2, &var_64).b == 0)
                                labelid_9:
                                    ebx.b = 0
                                else
                                    uint32_t var_6c
                                    
                                    if (sub_61ec90(arg2, &var_68).b == 0)
                                    labelid_9:
                                        ebx.b = 0
                                    else
                                        uint32_t var_60
                                        
                                        if (sub_61ec90(arg2, &var_6c).b == 0)
                                        labelid_9:
                                            ebx.b = 0
                                        else
                                            uint32_t var_5c
                                            
                                            if (sub_6c9300(arg2, &var_60).b == 0)
                                            labelid_9:
                                                ebx.b = 0
                                            else
                                                uint32_t var_50
                                                
                                                if (sub_6c9300(arg2, &var_5c).b == 0)
                                                labelid_9:
                                                    ebx.b = 0
                                                else
                                                    uint32_t var_54
                                                    
                                                    if (sub_61ec90(arg2, &var_50).b == 0)
                                                    labelid_9:
                                                        ebx.b = 0
                                                    else
                                                        uint32_t var_58
                                                        
                                                        if (sub_61ec90(arg2, &var_54).b == 0)
                                                        labelid_9:
                                                            ebx.b = 0
                                                        else
                                                            int32_t var_78
                                                            
                                                            if (sub_61ec90(arg2, &var_58).b == 0)
                                                            labelid_9:
                                                                ebx.b = 0
                                                            else
                                                                uint32_t var_84
                                                                
                                                                if (sub_6c9280(arg2, &var_78).b == 0)
                                                                labelid_9:
                                                                    ebx.b = 0
                                                                else
                                                                    int32_t var_88
                                                                    
                                                                    if (sub_61ec90(arg2, &var_84).b == 0)
                                                                    labelid_9:
                                                                        ebx.b = 0
                                                                    else
                                                                        uint32_t var_48
                                                                        
                                                                        if (sub_6c9280(arg2, &var_88).b == 0)
                                                                        labelid_9:
                                                                            ebx.b = 0
                                                                        else
                                                                            uint32_t var_44
                                                                            
                                                                            if (sub_61ec90(arg2, &var_48).b == 0)
                                                                            labelid_9:
                                                                                ebx.b = 0
                                                                            else if (sub_61ec90(arg2, &var_44).b
                                                                                == 0)
                                                                            labelid_9:
                                                                                ebx.b = 0
                                                                            else if (sub_61ec90(arg2, &var_30).b
                                                                                == 0)
                                                                            label_554435:
                                                                                ebx.b = 0
                                                                            else if (sub_61ec90(arg2, &var_34).b
                                                                                == 0)
                                                                            label_554435_1:
                                                                                ebx.b = 0
                                                                            else
                                                                                sub_553620(arg1, var_48, var_44, 
                                                                                    var_30, var_34)
                                                                                
                                                                                if (edi_7 == 0)
                                                                                    sub_553310(arg1, &var_2c)
                                                                                label_5543fb:
                                                                                    *(arg1 + 0x2b0) = ebx
                                                                                    sub_553710(arg1)
                                                                                    sub_5535a0(arg1, cond:0_1)
                                                                                    sub_5535c0(arg1, var_80)
                                                                                    uint32_t var_d0_29 = var_84
                                                                                    sub_5535e0(arg1)
                                                                                    sub_553680(arg1, var_88.b)
                                                                                    ebx.b = 1
                                                                                else
                                                                                    if (edi_7 == 1)
                                                                                        sub_5533e0(arg1, &var_2c, &var_40)
                                                                                        goto label_5543fb
                                                                                    
                                                                                    if (edi_7 == 2)
                                                                                        var_8_1.b = 2
                                                                                        struct textsurface::CTextSurfaceProperty::VTable
                                                                                            * var_bc
                                                                                        sub_5534b0(arg1, 
                                                                                            sub_643850(&var_bc, var_74, var_70, 
                                                                                                var_6c, var_68, var_64, var_60, var_5c, 
                                                                                                var_58, var_54, var_50))
                                                                                        var_8_1.b = 1
                                                                                        sub_553580(arg1, var_78.b)
                                                                                        goto label_5543fb
                                                                                    
                                                                                label_554435_2:
                                                                                    ebx.b = 0

void* ecx_40 = var_40

if (ecx_40 != 0)
    sub_403160(ecx_40, (var_38 - ecx_40) s>> 2, 4)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
