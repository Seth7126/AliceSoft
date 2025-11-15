// 函数: sub_4a80d0
// 地址: 0x4a80d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7315d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = data_7fcb98
int32_t* var_78 = ebx
int32_t result

if (ebx[4] != ebx[5])
    struct fileimage::CFileImageMaker::VTable* const var_74 = &fileimage::CFileImageMaker::`vftable'
    void* var_70 = nullptr
    char* var_6c_1 = nullptr
    int32_t var_68_1 = 0
    int32_t var_8_1 = 0
    int32_t var_18_1 = 0xf
    void* var_1c_1 = nullptr
    char var_2c = 0
    sub_403490(&var_2c, "MSK", 3)
    var_8_1.b = 1
    char* esi_1 = &var_2c
    char* edx_1 = &var_2c
    
    if (var_18_1 u>= 0x10)
        esi_1 = var_2c.d
    
    if (var_18_1 u>= 0x10)
        edx_1 = var_2c.d
    
    int32_t var_8c_1 = 0.d
    sub_6ca200(&var_70, var_6c_1, edx_1, var_1c_1 + esi_1)
    char var_5d = 0
    sub_4263a0(&var_70, &var_5d)
    var_8_1.b = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    sub_6ca100(&var_74, 0)
    sub_6ca1a0(&var_74, &ebx[0x13])
    sub_6ca100(&var_74, ebx[3])
    sub_6ca100(&var_74, ebx[5] - ebx[4])
    void* eax_11 = ebx[5] - ebx[4]
    char* ecx_8 = ebx[4]
    
    if (ecx_8 != 0 && eax_11 s> 0)
        int32_t var_8c_6 = 0.d
        sub_6ca200(&var_70, var_6c_1, ecx_8, eax_11 + ecx_8)
    
    void* i_1 = sub_6ca100(&var_74, ebx[0x1a])
    void** edi_1 = ebx[0x19]
    void* i = *edi_1
    
    if (i != edi_1)
        do
            int32_t eax_13 = *(i + 0x24)
            void* edx_2
            
            if (eax_13 u< 0x10)
                edx_2 = i + 0x10
            else
                edx_2 = *(i + 0x10)
            
            char* ecx_11
            
            if (eax_13 u< 0x10)
                ecx_11 = i + 0x10
            else
                ecx_11 = *(i + 0x10)
            
            int32_t var_8c_8 = 0.d
            sub_6ca200(&var_70, var_6c_1, ecx_11, *(i + 0x20) + edx_2)
            var_5d = 0
            sub_4263a0(&var_70, &var_5d)
            sub_6ca100(&var_74, *(i + 0x28))
            i_1 = sub_6ca100(&var_74, *(i + 0x2c))
            
            if (*(i + 0xd) == 0)
                void* i_2 = *(i + 8)
                
                if (*(i_2 + 0xd) != 0)
                    i_1 = *(i + 4)
                    
                    if (*(i_1 + 0xd) == 0)
                        while (i == *(i_1 + 8))
                            i = i_1
                            i_1 = *(i_1 + 4)
                            
                            if (*(i_1 + 0xd) != 0)
                                break
                    
                    i = i_1
                else
                    i = i_2
                    i_1 = *i
                    
                    while (*(i_1 + 0xd) == 0)
                        i = i_1
                        i_1 = *i
        while (i != edi_1)
        
        ebx = var_78
    
    var_8_1.b = 2
    void* var_44
    bool cond:2_1 = (*(*ebx[1] + 8))(sub_4079d0(i_1, &ebx[0xd], &var_44, &ebx[7]), &var_70) == 0
    var_8_1.b = 0
    int32_t result_1
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_44, result + 1, 1)
    
    bool ebx_1
    
    if (cond:2_1 == 0)
        ebx_1 = true
    else
        void* var_5c
        int32_t* eax_21 = sub_4079d0(result, &ebx[0xd], &var_5c, &ebx[7])
        var_8_1.b = 3
        
        if (eax_21[5] u>= 0x10)
            eax_21 = *eax_21
        
        var_78 = eax_21
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_403490(&var_2c, 0x76155c, 0x2b)
        var_8_1.b = 4
        var_8_1.b = 5
        sub_6c52e0(sub_409240(&var_78, &var_2c, &var_44, &var_78))
        
        if (result_1 u>= 0x10)
            sub_403160(var_44, result_1 + 1, 1)
        
        int32_t var_30 = 0xf
        int32_t var_34_1 = 0
        var_44.b = 0
        
        if (var_18_2 u>= 0x10)
            sub_403160(var_2c.d, var_18_2 + 1, 1)
        
        int32_t var_18_3 = 0xf
        int32_t var_1c_3 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        ebx_1 = false
    
    void* edx_7 = var_70
    var_74 = &fileimage::CFileImageMaker::`vftable'
    
    if (edx_7 != 0)
        sub_403160(edx_7, var_68_1 - edx_7, 1)
    
    result.b = ebx_1
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
