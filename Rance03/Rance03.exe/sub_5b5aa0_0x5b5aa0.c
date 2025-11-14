// 函数: sub_5b5aa0
// 地址: 0x5b5aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c8fb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1

if (arg1 != arg2)
    int32_t eax_3 = *arg2
    int32_t ecx = arg2[1]
    
    if (eax_3 != ecx)
        void* ecx_2 = *arg1
        int32_t edx_3 = (ecx - eax_3) s>> 4
        int32_t ebx_3 = (arg1[1] - ecx_2) s>> 4
        
        if (edx_3 u> ebx_3)
            int32_t eax_11 = (arg1[2] - ecx_2) s>> 4
            void* eax_12
            
            if (edx_3 u> eax_11)
                if (ecx_2 != 0)
                    sub_5b36a0(ecx_2, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_10
                eax_12, ecx_10 = sub_56f4a0(arg1, (arg2[1] - *arg2) s>> 4)
                
                if (eax_12.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_2c_8 = arg2
                    int32_t var_30_4 = ecx_10
                    arg1[1] = sub_5b3860(eax_12, arg2[1], *arg2, *arg1)
            else
                void* ebx_5 = (ebx_3 << 4) + *arg2
                int32_t ecx_5
                eax_12, ecx_5 = sub_5b5f60(eax_11, ebx_5, *arg2, ecx_2)
                int32_t* var_2c_4 = arg2
                int32_t var_30_2 = ecx_5
                arg1[1] = sub_5b3860(eax_12, arg2[1], ebx_5, arg1[1])
        else
            sub_5b36a0(sub_5b5f60(eax_3, arg2[1], eax_3, ecx_2), arg1[1])
            arg1[1] = ((arg2[1] - *arg2) & 0xfffffff0) + *arg1
    else
        sub_4413a0(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
