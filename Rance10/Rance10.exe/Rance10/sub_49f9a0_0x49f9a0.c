// 函数: sub_49f9a0
// 地址: 0x49f9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730d51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = (***(arg1 + 0x2b8))(0x760ebc)

if (eax_4 != 0 && (**eax_4)(eax_2) != 0)
    int32_t ebx_1 = 0
    void** i_1 = nullptr
    void** i_2 = nullptr
    int32_t var_144_1 = 0
    int32_t var_140_1 = 0
    int32_t var_8_1 = 0
    uint32_t eax_8 = DragQueryFileA(arg2, 0xffffffff, nullptr, 0)
    uint32_t iFile = 0
    char var_138
    
    if (eax_8 s> 0)
        do
            char lpszFile
            DragQueryFileA(arg2, iFile, &lpszFile, 0x104)
            bool cond:0_1 = lpszFile != 0
            uint32_t var_124_1 = 0xf
            int32_t var_128_1 = 0
            var_138 = 0
            void* eax_9
            
            if (cond:0_1)
                char* eax_10 = &lpszFile
                char i
                
                do
                    i = *eax_10
                    eax_10 = &eax_10[1]
                while (i != 0)
                void var_11f
                eax_9 = eax_10 - &var_11f
            else
                eax_9 = nullptr
            
            sub_403490(&var_138, &lpszFile, eax_9)
            var_8_1.b = 1
            sub_431bd0(&i_2, &var_138)
            var_8_1.b = 0
            
            if (var_124_1 u>= 0x10)
                sub_403160(var_138.d, var_124_1 + 1, 1)
            
            iFile += 1
            int32_t var_124_2 = 0xf
            int32_t var_128_2 = 0
            var_138 = 0
        while (iFile s< eax_8)
        
        ebx_1 = var_144_1
        i_1 = i_2
    
    eax_8.b = i_1 == ebx_1
    
    if (eax_8.b == 0)
        int32_t edi_1 = data_7fcbbc
        
        if (edi_1 != 0)
            sub_63c7e0(9)
            edi_1 = data_7fcbbc
        
        if (edi_1 != 0)
            sub_63c7e0((ebx_1 - i_1) s/ 0x18)
        
        for (; i_1 != ebx_1; i_1 = &i_1[6])
            int32_t var_124_3 = 0xf
            int32_t var_128_3 = 0
            var_138 = 0
            sub_403590(&var_138, i_1, 0, 0xffffffff)
            var_8_1.b = 2
            
            if (data_7fcbbc != 0)
                sub_63c8b0(&var_138)
            
            var_8_1.b = 0
            
            if (var_124_3 u>= 0x10)
                sub_403160(var_138.d, var_124_3 + 1, 1)
    
    sub_417070(&i_2)

DragFinish(arg2)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return 0
