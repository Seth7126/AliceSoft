// 函数: sub_5c7740
// 地址: 0x5c7740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9ce0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
var_48 = ebx
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t var_2c = 0xf
uint32_t var_30 = 0
char var_40 = 0
var_4.b = 1
char result = sub_5cea10(arg1, &var_40, "S_FIND")

if (result != 0)
    result = sub_5cea10(ebx, &var_28, "S_FIND")
    
    if (result != 0)
        char* ecx_1 = &var_28
        int32_t edi_1 = 0
        
        if (var_14 u>= 0x10)
            ecx_1 = var_28.d
        
        void* esi_1 = nullptr
        char* var_44_1 = ecx_1
        int32_t var_60_2
        void* ecx_2
        
        if (var_18 s> 0)
            do
                char* eax_5 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_5 = var_40.d
                
                void* ebx_1 = esi_1 + ecx_1
                
                if (_strncmp(ebx_1, eax_5, var_30) == 0)
                    var_60_2 = edi_1
                    ecx_2 = var_48 + 0x220
                    goto label_5c7854
                
                int32_t eax_6
                eax_6.b = *ebx_1
                
                if ((eax_6.b u< 0x81 || eax_6.b u> 0x9f) && (eax_6.b u< 0xe0 || eax_6.b u> 0xef))
                    esi_1 += 1
                else
                    esi_1 += 2
                
                ecx_1 = var_44_1
                edi_1 += 1
            while (esi_1 s< var_18)
            
            ebx = var_48
        
        var_60_2 = 0xffffffff
        ecx_2 = ebx + 0x220
    label_5c7854:
        result = sub_5ddf10(ecx_2, var_60_2)

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
