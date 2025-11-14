// 函数: sub_6287e0
// 地址: 0x6287e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_e0
int32_t var_4 = __security_cookie ^ &var_e0

if (arg2 != 0)
    *(arg2 + 0x4a) |= 0x8000

int32_t i = 0
char var_c8[0x6]
int32_t eax_1

if ((*"profile '")[0] != 0)
    while (i u< 0xc3)
        eax_1.b = (*"profile '")[i]
        var_c8[i] = eax_1.b
        i += 1
        
        if ((*"profile '")[i] == 0)
            break

var_c8[i] = 0

if (i u< i + 0x4f)
    if (arg4 != 0 && *arg4 != 0)
        int32_t edx_1 = i + 0x4e
        void* ecx_1 = arg4 - i
        
        while (i u< edx_1)
            eax_1.b = *(ecx_1 + i)
            var_c8[i] = eax_1.b
            i += 1
            
            if (*(ecx_1 + i) == 0)
                break
    
    var_c8[i] = 0

if (i u< 0xc4)
    if (data_74c104 != 0)
        void* ecx_2 = &data_74c104 - i
        
        while (i u< 0xc3)
            eax_1.b = *(ecx_2 + i)
            var_c8[i] = eax_1.b
            i += 1
            
            if (*(ecx_2 + i) == 0)
                break
    
    var_c8[i] = 0

uint32_t edx_2 = arg5
uint32_t eax_2

if (sub_628740(edx_2) == 0)
    int32_t edi
    int32_t var_f0_1 = edi
    int32_t edi_1 = 0
    char var_c9 = 0
    char* ecx_5 = &var_c9
    
    while (edx_2 != 0 || edi_1 s< 1)
        ecx_5 -= 1
        int32_t eax_4 = edx_2 & 0xf
        edx_2 u>>= 4
        edi_1 += 1
        eax_4.b = (*"0123456789ABCDEF")[eax_4]
        *ecx_5 = eax_4.b
        
        if (ecx_5 u<= &var_e0)
            break
    
    if (i u< 0xc4)
        if (*ecx_5 != 0)
            char* ecx_6 = ecx_5 - i
            
            while (i u< 0xc3)
                eax_2.b = ecx_6[i]
                var_c8[i] = eax_2.b
                i += 1
                
                if (ecx_6[i] == 0)
                    break
        
        var_c8[i] = 0
        
        if (i u< 0xc4)
            if (data_74bd88 != 0)
                char* ecx_7 = &data_74bd88 - i
                
                while (i u< 0xc3)
                    eax_2.b = ecx_7[i]
                    var_c8[i] = eax_2.b
                    i += 1
                    
                    if (ecx_7[i] == 0)
                        break
            
            var_c8[i] = 0
            goto label_62895e
else
    sub_628690(&var_c8[i], edx_2)
    void var_c2
    *(&var_c2 + i) = 0x203a
    i += 8
label_62895e:
    
    if (i u< 0xc4)
        if (arg6 != 0 && *arg6 != 0)
            void* ecx_9 = arg6 - i
            
            while (i u< 0xc3)
                eax_2.b = *(ecx_9 + i)
                var_c8[i] = eax_2.b
                i += 1
                
                if (*(ecx_9 + i) == 0)
                    break
        
        var_c8[i] = 0
int32_t eax_5
eax_5.b = arg2 != 0
sub_62a820(eax_5 + 1, &var_c8, arg3, eax_5 + 1)
sub_69a5bc(var_4 ^ &var_e0)
return 0
