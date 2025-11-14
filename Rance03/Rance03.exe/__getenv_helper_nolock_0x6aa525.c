// 函数: __getenv_helper_nolock
// 地址: 0x6aa525
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = data_75c928

if (data_75df5c == 0)
    return nullptr

PSTR ecx

if (esi != 0)
label_6aa55c:
    
    if (arg1 != 0)
        void* eax_3 = _strlen(arg1)
        
        while (true)
            char* ecx_3 = *esi
            
            if (ecx_3 == 0)
                break
            
            if (_strlen(ecx_3) u> eax_3)
                char* eax_5 = *esi
                
                if (*(eax_5 + eax_3) == 0x3d && boost::math::tools::evaluate_rational<9,long double,long double,long double>(
                        eax_5, arg1, eax_3) == 0)
                    return *esi + 1 + eax_3
            
            esi = &esi[1]
else if (data_75c92c != esi && ___wtomb_environ(ecx) == 0)
    esi = data_75c928
    
    if (esi != 0)
        goto label_6aa55c
return nullptr
