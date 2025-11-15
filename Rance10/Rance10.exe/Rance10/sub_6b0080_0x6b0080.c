// 函数: sub_6b0080
// 地址: 0x6b0080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_10c
int32_t eax_1 = __security_cookie ^ &var_10c
int32_t eax_2 = *(arg3 + 0x298)

if (eax_2 != 0)
    if (eax_2 == 1)
        int32_t eax_3 = sub_6ace40(arg3, arg4)
        @__security_check_cookie@4(eax_1 ^ &var_10c)
        return eax_3
    
    *(arg3 + 0x298) = eax_2 - 1
    
    if (eax_2 == 2)
        sub_6ace40(arg3, arg4)
        int32_t eax_5 = sub_6a77d0(arg3, "no space in chunk cache")
        @__security_check_cookie@4(eax_1 ^ &var_10c)
        return eax_5

int32_t eax_6 = *(arg3 + 0x74)

if ((eax_6.b & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax_6.b & 4) != 0)
    *(arg3 + 0x74) = eax_6 | 8

void* ebp = *(arg3 + 0x2b8)

if (ebp == 0)
label_6b0161:
    
    if (arg4 == 0xffffffff)
        ebp = nullptr
        sub_6a7780(arg3, "insufficient memory to read chunk")
    else
        int32_t eax_9 = *(arg3 + 0x274)
        void* eax_10
        
        if (eax_9 == 0)
            eax_10 = sub_705e22()
        else
            eax_10 = eax_9(arg3, arg4 + 1)
        
        ebp = eax_10
        
        if (ebp == 0)
            sub_6a7780(arg3, "insufficient memory to read chunk")
        else
            *(arg3 + 0x2b8) = ebp
            *(arg3 + 0x2bc) = arg4 + 1
else if (arg4 + 1 u> *(arg3 + 0x2bc))
    int32_t eax_8 = *(arg3 + 0x278)
    *(arg3 + 0x2b8) = 0
    *(arg3 + 0x2bc) = 0
    
    if (eax_8 == 0)
        _free(ebp)
    else
        eax_8(arg3, ebp)
    
    goto label_6b0161

void* eax_11

if (ebp != 0)
    int32_t eax_12 = *(arg3 + 0x5c)
    
    if (eax_12 == 0)
        sub_6a7500(arg3, "Call to NULL read function")
        noreturn
    
    sub_6a4030(eax_12(arg3, ebp, arg4), ebp, arg3, arg4)
    int32_t ecx_12
    eax_11, ecx_12 = sub_6ace40(arg3, nullptr)
    
    if (eax_11 == 0)
        char* esi_1 = nullptr
        
        if (arg4 != 0)
            while (*(esi_1 + ebp) != 0)
                esi_1 = &esi_1[1]
                
                if (esi_1 u>= arg4)
                    break
        
        char* edx_4
        
        if (arg4 == 0 || esi_1 u> 0x4f || esi_1 u< 1)
            edx_4 = "bad keyword"
        label_6b0343:
            
            if ((*(arg3 + 0x78) & 0x100000) == 0)
                sub_6a7750(arg3, edx_4)
                noreturn
            
            char var_dc[0xd8]
            sub_6a7650(eax_11, &var_dc, arg3, edx_4)
            eax_11 = sub_6a7530(arg3, &var_dc)
        else
            eax_11 = &esi_1[5]
            
            if (eax_11 u> arg4)
                edx_4 = "truncated"
                goto label_6b0343
            
            eax_11.b = *(esi_1 + ebp + 1)
            char var_109_1 = eax_11.b
            
            if (eax_11.b != 0 && (eax_11.b != 1 || *(esi_1 + ebp + 2) != 0))
                edx_4 = "bad compression info"
                goto label_6b0343
            
            void* esi_2 = &esi_1[3]
            void* var_104_1 = esi_2
            
            if (esi_2 u< arg4)
                while (*(esi_2 + ebp) != 0)
                    esi_2 += 1
                    
                    if (esi_2 u>= arg4)
                        break
            
            void* esi_3 = esi_2 + 1
            void* var_100_1 = esi_3
            
            if (esi_3 u< arg4)
                while (*(esi_3 + ebp) != 0)
                    esi_3 += 1
                    
                    if (esi_3 u>= arg4)
                        break
            
            void* ebx_1
            
            if (eax_11.b != 0)
                if (esi_3 + 1 u>= arg4)
                label_6b0337:
                    edx_4 = "truncated"
                    goto label_6b0343
                
            label_6b029e:
                int32_t var_120_4 = ecx_12
                void* var_108 = 0xffffffff
                eax_11, ecx_12 = sub_6ad240(&var_108, arg4, arg3, esi_3 + 1, &var_108)
                
                if (eax_11 == 1)
                    ebp = *(arg3 + 0x2b8)
                    ebx_1 = var_108
                    goto label_6b02db
                
                edx_4 = *(arg3 + 0x9c)
                
                if (edx_4 != 0)
                    goto label_6b0343
                
                ebx_1 = var_108
                goto label_6b02db
            
            if (esi_3 + 1 u> arg4)
                if (eax_11.b == 0 || esi_3 + 1 u>= arg4)
                    goto label_6b0337
                
                goto label_6b029e
            
            ebx_1 = arg4 - (esi_3 + 1)
        label_6b02db:
            *(ebx_1 + esi_3 + 1 + ebp) = 0
            int32_t var_120_5 = ecx_12
            int32_t eax_16
            eax_16.b = var_109_1 == 0
            void* var_f4_1 = ebp
            int32_t var_ec_1 = 0
            int32_t var_f8 = eax_16 + 1
            void* var_e8_1 = ebx_1
            void* var_e4_1 = var_104_1 + ebp
            void* var_e0_1 = var_100_1 + ebp
            void* var_f0_1 = esi_3 + 1 + ebp
            eax_11 = sub_6b1fc0(&var_f8, arg2, arg3, &var_f8)
            
            if (eax_11 != 0)
                edx_4 = "insufficient memory"
                goto label_6b0343
else
    sub_6ace40(arg3, arg4)
    eax_11 = sub_6a77d0(arg3, "out of memory")

@__security_check_cookie@4(eax_1 ^ &var_10c)
return eax_11
