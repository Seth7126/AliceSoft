// 函数: sub_62a250
// 地址: 0x62a250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744c6e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* result_4
void* result_7 = result_4
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_2 = arg4
int32_t var_8_1 = 0
void* result
void var_60

if (arg3 == 0xd)
    result, arg2 = sub_6228d0(arg4, arg2)
    void* result_5 = result
    
    if (result_5 != 0)
        result, arg2 = (*(*(result_5 + 0x20) + 0x10))(eax_2)
        int32_t esi_2 = 0
        void* result_1 = result
        
        if (result s<= 0)
        labelid_5:
            result_4.b = 1
        else
            void* var_14_1 = nullptr
            
            while (true)
                void* var_24_1 = &var_60
                void* var_28_1 = &var_60
                int32_t var_3c_7 = 0
                var_8_1.b = 3
                
                if (arg5 != 0)
                    int32_t var_3c_8 = (**arg5)(&var_60)
                
                var_8_1.b = 4
                int32_t eax_14
                
                if (*(result_5 + 0x14) != 0)
                    eax_14 = *(result_5 + 0x10)
                else
                    eax_14 = 0
                
                int32_t var_1c_2 = *(eax_14 + (esi_2 << 2))
                
                if (sub_629c10(result_5, esi_2) != 0)
                    *(var_14_1 + *(*(result_5 + 0x38) + 0x2c) + 0x34)
                
                var_8_1.b = 0
                result, arg2 = sub_62a250(result_2)
                
                if (result.b == 0)
                    break
                
                esi_2 += 1
                var_14_1 += 0x70
                
                if (esi_2 s>= result_1)
                    goto label_62a427_1
            
            result_4.b = 0
    else
        result_4.b = 0
else if (arg3 == 0x3f)
    result, arg2 = sub_622960(arg4, arg2)
    
    if (result != 0)
        result_2 = result
        
        if (arg5 == 0)
            sub_6d090a()
            noreturn
        
        result, arg2 = (*(*arg5 + 8))(&result_2)
        
        if (result.b != 0)
        labelid_5:
            result_4.b = 1
        else
            result_4.b = 0
    else
        result_4.b = 0
else if (arg3 != 0x4f)
labelid_5:
    result_4.b = 1
else
    result, arg2 = sub_622840(arg4, arg2)
    result_4 = result
    
    if (result_4 != 0)
        result.b = *(result_4 + 0x38)
        
        if (result.b == 0 || *(result_4 + 0x2c) != 0x3f)
        label_62a427:
            result_4.b = 1
        else
            result, arg2 = (*(*(result_4 + 0x20) + 8))(eax_2)
            int32_t edi_1 = 0
            void* result_3 = result
            
            if (result s<= 0)
            label_62a427_1:
                result_4.b = 1
            else
                while (true)
                    void* var_20_1 = &var_60
                    void* var_1c_1 = &var_60
                    int32_t var_3c_2 = 0
                    var_8_1.b = 1
                    
                    if (arg5 != 0)
                        int32_t var_3c_3 = (**arg5)(&var_60)
                    
                    var_8_1.b = 2
                    void* result_6 = result_2
                    (*(*(result_4 + 0x20) + 0x20))(edi_1)
                    (**(result_4 + 0x20))(result_6)
                    var_8_1.b = 0
                    result, arg2 = sub_62a250()
                    
                    if (result.b == 0)
                        break
                    
                    edi_1 += 1
                    
                    if (edi_1 s>= result_3)
                        goto label_62a427_1
                
                result_4.b = 0
    else
        result_4.b = 0
int32_t var_8_2 = 5

if (arg5 != 0)
    void arg_8
    arg2.b = arg5 != &arg_8
    (*(*arg5 + 0x10))(zx.d(arg2.b))

result.b = result_4.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
