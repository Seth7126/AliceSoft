// 函数: sub_515f90
// 地址: 0x515f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6ba740
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi

if (arg2[5] u< 0x10)
    esi = arg2
else
    esi = *arg2

void* ebx = arg2[4]
int32_t ecx_1 = arg1[2] - *arg1
void* var_50 = ebx + esi
int32_t result = ecx_1 s/ 0x18

if (result u< ebx)
    if (ebx u> 0xaaaaaaa)
        sub_69a551("vector<T> too long")
        noreturn
    
    result, ecx_1 = sub_410850(arg1, ebx)

void* ebx_1 = var_50

while (esi u< ebx_1)
    ecx_1.b = *esi
    
    if ((ecx_1.b u< 0x81 || ecx_1.b u> 0x9f) && (ecx_1.b u< 0xe0 || ecx_1.b u> 0xef))
        esi += 1
        
        if (ecx_1.b != 0xa)
            var_54 = ecx_1.b
            char var_53 = 0
            int32_t var_38_1 = 0xf
            int32_t var_3c_1 = 0
            char var_4c = 0
            void* eax_10
            
            if (ecx_1.b != 0)
                char* eax_11 = &var_54
                
                do
                    ecx_1.b = *eax_11
                    eax_11 = &eax_11[1]
                while (ecx_1.b != 0)
                
                eax_10 = eax_11 - &var_53
            else
                eax_10 = nullptr
            
            sub_402110(&var_4c, &var_54, eax_10)
            int32_t var_c_3 = 1
            result, ecx_1 = sub_412d60(arg1, &var_4c)
            int32_t var_c_4 = 0xffffffff
            
            if (var_38_1 u>= 0x10)
                result, ecx_1 = j__free(var_4c.d)
            
            int32_t var_38_2 = 0xf
            int32_t var_3c_2 = 0
            var_4c = 0
    else
        result.b = *(esi + 1)
        esi += 2
        var_50.b = ecx_1.b
        var_50:1.b = result.b
        var_50:2.b = 0
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        void* ecx_3
        
        if (ecx_1.b != 0)
            char* ecx_4 = &var_50
            
            do
                result.b = *ecx_4
                ecx_4 = &ecx_4[1]
            while (result.b != 0)
            
            ecx_3 = ecx_4 - &var_50:1
        else
            ecx_3 = nullptr
        
        sub_402110(&var_34, &var_50, ecx_3)
        int32_t var_c_1 = 0
        result, ecx_1 = sub_412d60(arg1, &var_34)
        int32_t var_c_2 = 0xffffffff
        
        if (var_20_1 u>= 0x10)
            result, ecx_1 = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
