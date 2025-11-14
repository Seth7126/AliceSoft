// 函数: sub_4c6cf0
// 地址: 0x4c6cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebp = arg1 + 0xd0
void* ebx = arg1 + 0xb8
int32_t* var_40
sub_40d1c0(&ExceptionList, ebx, &var_40, ebp)
int32_t var_4 = 0
char* eax_6 = sub_4c75f0(&var_40)
int32_t arg_4
int32_t edx_1 = arg_4
int32_t arg_8
int32_t ecx_1 = arg_8
int32_t var_2c
int32_t var_28
int32_t var_14

if (edx_1 != ecx_1 && ecx_1 s<= eax_6)
    int32_t* eax_7 = &arg_8
    
    if (ecx_1 s>= edx_1)
        eax_7 = &arg_4
    
    int32_t i_2 = *eax_7
    int32_t* eax_8 = &arg_8
    
    if (edx_1 s>= ecx_1)
        eax_8 = &arg_4
    
    int32_t edi_1 = *eax_8
    sub_402110(arg1 + 0xb8, 0x6da4d2, nullptr)
    sub_402110(ebp, 0x6da4ca, nullptr)
    void* esi_1 = nullptr
    int32_t i_4 = 0
    
    if (i_2 s> 0)
        int32_t* edx_2 = var_40
        i_4 = i_2
        int32_t i
        
        do
            int32_t* eax_9 = &var_40
            
            if (var_2c u>= 0x10)
                eax_9 = edx_2
            
            int32_t* eax_10
            
            if (*(eax_9 + esi_1) u>= 0x81)
                eax_10 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_10 = edx_2
            
            if (*(eax_9 + esi_1) u>= 0x81 && *(eax_10 + esi_1) u<= 0x9f)
                esi_1 += 1
            else
                int32_t* eax_11 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_11 = edx_2
                
                if (*(eax_11 + esi_1) u>= 0xe0)
                    int32_t* eax_12 = &var_40
                    
                    if (var_2c u>= 0x10)
                        eax_12 = edx_2
                    
                    if (*(eax_12 + esi_1) u<= 0xef)
                        esi_1 += 1
            
            esi_1 += 1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t* eax_13 = sub_403070(&var_40, &var_28, 0, esi_1)
    ebx = arg1 + 0xb8
    
    if (ebx != eax_13)
        if (*(ebx + 0x14) u>= 0x10)
            j__free(*ebx)
        
        *(ebx + 0x14) = 0xf
        *(ebx + 0x10) = 0
        *ebx = 0
        sub_4030b0(ebx, eax_13)
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    if (i_4 s< edi_1)
        int32_t i_3 = edi_1 - i_4
        int32_t** edx_3 = var_40
        int32_t i_1
        
        do
            char* eax_15 = &var_40
            
            if (var_2c u>= 0x10)
                eax_15 = edx_3
            
            char* eax_16
            
            if (*(eax_15 + esi_1) u>= 0x81)
                eax_16 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_16 = edx_3
            
            if (*(eax_15 + esi_1) u>= 0x81 && *(eax_16 + esi_1) u<= 0x9f)
                esi_1 += 1
            else
                char* eax_17 = &var_40
                
                if (var_2c u>= 0x10)
                    eax_17 = edx_3
                
                if (*(eax_17 + esi_1) u>= 0xe0)
                    int32_t** eax_18 = &var_40
                    
                    if (var_2c u>= 0x10)
                        eax_18 = edx_3
                    
                    if (*(eax_18 + esi_1) u<= 0xef)
                        esi_1 += 1
            
            esi_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    int32_t var_30
    eax_6 = sub_403070(&var_40, &var_28, esi_1, var_30 - esi_1)
    char* esi_2 = eax_6
    
    if (ebp != esi_2)
        if (ebp[5] u>= 0x10)
            j__free(*ebp)
        
        ebp[5] = 0xf
        ebp[4] = 0
        *ebp = nullptr
        
        if (*(esi_2 + 0x14) u>= 0x10)
            *ebp = *esi_2
            *esi_2 = 0
        else
            void* eax_21 = *(esi_2 + 0x10)
            
            if (eax_21 != 0xffffffff)
                _memcpy(ebp, esi_2, eax_21 + 1, eax_4)
        
        ebp[4] = *(esi_2 + 0x10)
        eax_6 = *(esi_2 + 0x14)
        ebp[5] = eax_6
        *(esi_2 + 0x14) = 0xf
        *(esi_2 + 0x10) = 0
        *esi_2 = 0
    
    if (var_14 u>= 0x10)
        eax_6 = j__free(var_28)

var_4.b = 1
char* result = sub_4c1f00(arg1 + 0x100, sub_40d1c0(eax_6, ebx, &var_28, ebp))

if (var_14 u>= 0x10)
    result = j__free(var_28)

*(arg1 + 0xa8) = 0xffffffff
*(arg1 + 0xac) = 0xffffffff

if (var_2c u>= 0x10)
    result = j__free(var_40)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
