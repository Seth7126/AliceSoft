// 函数: sub_6b11d0
// 地址: 0x6b11d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_408
int32_t eax_1 = __security_cookie ^ &var_408
int32_t ebx = arg2
int32_t ebp = 0
var_408 = ebx

if (ebx != 0)
    ebp = arg4

*(arg3 + 0x90) = ebx
*(arg3 + 0x94) = 0
int32_t result

while (true)
    if (*(arg3 + 0x88) == 0)
        if (*(arg3 + 0x13c) == 0)
            uint32_t i
            
            do
                sub_6ace40(arg3, nullptr)
                i = sub_6acd20(arg3)
                bool cond:2_1 = *(arg3 + 0x11c) != 0x49444154
                *(arg3 + 0x13c) = i
                
                if (cond:2_1)
                    sub_6a7500(arg3, "Not enough image data")
                    noreturn
            while (i == 0)
        
        void* edi_1 = *(arg3 + 0x2c0)
        void* eax_2 = *(arg3 + 0x13c)
        void* ebx_1 = *(arg3 + 0x2b8)
        
        if (edi_1 u> eax_2)
            edi_1 = eax_2
        
        if (ebx_1 == 0)
        label_6b12a4:
            
            if (edi_1 != 0)
                int32_t eax_4 = *(arg3 + 0x274)
                void* eax_5
                
                if (eax_4 == 0)
                    eax_5 = sub_705e22()
                else
                    eax_5 = eax_4(arg3, edi_1)
                
                ebx_1 = eax_5
            
            if (edi_1 == 0 || ebx_1 == 0)
                sub_6a7750(arg3, "insufficient memory to read chunk")
                noreturn
            
            *(arg3 + 0x2b8) = ebx_1
            *(arg3 + 0x2bc) = edi_1
        else if (edi_1 u> *(arg3 + 0x2bc))
            int32_t eax_3 = *(arg3 + 0x278)
            *(arg3 + 0x2b8) = 0
            *(arg3 + 0x2bc) = 0
            
            if (eax_3 == 0)
                _free(ebx_1)
            else
                eax_3(arg3, ebx_1)
            
            goto label_6b12a4
        
        int32_t eax_6 = *(arg3 + 0x5c)
        
        if (eax_6 == 0)
            sub_6a7500(arg3, "Call to NULL read function")
            noreturn
        
        sub_6a4030(eax_6(arg3, ebx_1, edi_1), ebx_1, arg3, edi_1)
        *(arg3 + 0x84) = ebx_1
        *(arg3 + 0x13c) -= edi_1
        ebx = var_408
        *(arg3 + 0x88) = edi_1
    
    if (ebx == 0)
        *(arg3 + 0x94) = 0x400
        void var_404
        *(arg3 + 0x90) = &var_404
    else
        int32_t eax_8 = 0xffffffff
        
        if (ebp u< 0xffffffff)
            eax_8 = ebp
        
        ebp -= eax_8
        *(arg3 + 0x94) = eax_8
    
    result = sub_6a08b0(arg3 + 0x84, 0)
    int32_t result_1 = result
    
    if (ebx == 0)
        result = 0x400 - *(arg3 + 0x94)
        ebp += result
    else
        ebp += *(arg3 + 0x94)
    
    *(arg3 + 0x94) = 0
    void* ecx_4
    char* edx_1
    
    if (result_1 == 1)
        *(arg3 + 0x74) |= 8
        *(arg3 + 0x78) |= 8
        bool cond:3_1 = *(arg3 + 0x88) u> 0
        *(arg3 + 0x90) = 0
        
        if (cond:3_1 || *(arg3 + 0x13c) u> 0)
            result = sub_6a77d0(arg3, "Extra compressed data")
        
        if (ebp == 0)
            break
        
        ecx_4 = arg3
        
        if (ebx != 0)
            sub_6a7500(ecx_4, "Not enough image data")
            noreturn
        
        edx_1 = "Too much image data"
    else if (result_1 != 0)
        ecx_4 = arg3
        sub_6a4ab0(ecx_4, result_1)
        edx_1 = *(arg3 + 0x9c)
        
        if (ebx != 0)
            sub_6a7750(ecx_4, edx_1)
            noreturn
    else
        if (ebp == 0)
            break
        
        continue
    
    result = sub_6a77d0(ecx_4, edx_1)
    break

@__security_check_cookie@4(eax_1 ^ &var_408)
return result
