// 函数: sub_412670
// 地址: 0x412670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3bc6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x4034)
int32_t eax_2 = __security_cookie ^ &ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
int32_t arg_4028
fsbase->NtTib.ExceptionList = &arg_4028
sub_4107c0(*(ecx + 0x38), *(ecx + 0x3c))
*(ecx + 0x3c) = *(ecx + 0x38)
void* ebx

if (*(ecx + 0x34) u< 0x10)
    ebx = ecx + 0x20
else
    ebx = *(ecx + 0x20)

char* esi_1 = nullptr

while (true)
    char arg_24
    char* ecx_1 = &arg_24
    
    while (true)
        char* eax_5
        eax_5.b = *(esi_1 + ebx)
        void arg_25
        int32_t arg_4030
        
        if (eax_5.b == 0xa)
            *ecx_1 = 0
            bool cond:0_1 = arg_24 != 0
            int32_t arg_20 = 0xf
            int32_t arg_1c = 0
            char arg_c = 0
            void* ecx_2
            
            if (cond:0_1)
                char* ecx_3 = &arg_24
                
                do
                    eax_5.b = *ecx_3
                    ecx_3 = &ecx_3[1]
                while (eax_5.b != 0)
                
                ecx_2 = ecx_3 - &arg_25
            else
                ecx_2 = nullptr
            
            sub_402110(&arg_c, &arg_24, ecx_2)
            arg_4030 = 0
            sub_412d60(ecx + 0x38, &arg_c)
            arg_4030 = 0xffffffff
            
            if (arg_20 u>= 0x10)
                j__free(arg_c.d)
            
            esi_1 = &esi_1[1]
            break
        
        if (eax_5.b != 0)
            char* edx_1
            
            if (*(ecx + 0x34) u< 0x10)
                edx_1 = ecx + 0x20
            else
                edx_1 = *(ecx + 0x20)
            
            void* edx_2
            
            if (*(edx_1 + esi_1) u>= 0x81)
                if (*(ecx + 0x34) u< 0x10)
                    edx_2 = ecx + 0x20
                else
                    edx_2 = *(ecx + 0x20)
            
            if (*(edx_1 + esi_1) u< 0x81 || *(edx_2 + esi_1) u> 0x9f)
                char* edx_3
                
                if (*(ecx + 0x34) u< 0x10)
                    edx_3 = ecx + 0x20
                else
                    edx_3 = *(ecx + 0x20)
                
                void* edx_4
                
                if (*(edx_3 + esi_1) u>= 0xe0)
                    if (*(ecx + 0x34) u< 0x10)
                        edx_4 = ecx + 0x20
                    else
                        edx_4 = *(ecx + 0x20)
                
                if (*(edx_3 + esi_1) u< 0xe0 || *(edx_4 + esi_1) u> 0xef)
                    *ecx_1 = eax_5.b
                    ecx_1 = &ecx_1[1]
                    esi_1 = &esi_1[1]
                    continue
            
            *ecx_1 = eax_5.b
            eax_5.b = *(esi_1 + ebx + 1)
            ecx_1[1] = eax_5.b
            ecx_1 = &ecx_1[2]
            esi_1 = &esi_1[2]
        else
            if (ecx_1 u> &arg_24)
                *ecx_1 = 0
                int32_t arg_8 = 0xf
                int32_t arg_4 = 0
                ExceptionList.b = 0
                void* ecx_6
                
                if (arg_24 != 0)
                    char* ecx_7 = &arg_24
                    
                    do
                        eax_5.b = *ecx_7
                        ecx_7 = &ecx_7[1]
                    while (eax_5.b != 0)
                    
                    ecx_6 = ecx_7 - &arg_25
                else
                    ecx_6 = nullptr
                
                sub_402110(&ExceptionList, &arg_24, ecx_6)
                arg_4030 = 1
                int32_t result = sub_412d60(ecx + 0x38, &ExceptionList)
                fsbase->NtTib.ExceptionList = arg_4028
                sub_69a5bc(eax_2 ^ &ExceptionList)
                return result
