// 函数: sub_5d5e80
// 地址: 0x5d5e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = (*(**(arg1 + 4) + 0x98))()
int32_t eax_3 = (*(**(arg1 + 4) + 0x9c))()
int32_t ebp = (*(*arg3 + 0x1c))()

if (ebp s>= 2 && ebx.b == 0)
    ebp = 1
else if (ebp != 4)
    if (ebp == 3)
        goto label_5d5ed3
    
    if (ebp == 2)
        goto label_5d5ee4
else if (eax_3 u< 0x10)
    ebp = 3
label_5d5ed3:
    
    if (eax_3 u< 8)
        ebp = 2
    label_5d5ee4:
        
        if (eax_3 u< 4)
            ebp = 1

int32_t eax_6 = (*(*arg2 + 0x48))()
int32_t result

if (eax_6 != 0)
    void* edi_1 = *(*(*arg2 + 0x48))()
    result = (*(edi_1 + 0x2c))(0, ebp, 1, zx.d((*(*arg2 + 0x64))()))

if (eax_6 == 0 || result.b != 0)
    int32_t eax_12 = (*(*arg2 + 0x60))()
    
    if (eax_12 != 0)
        void* edi_2 = *(*(*arg2 + 0x60))()
        result = (*(edi_2 + 0x2c))(1, ebp, 1, zx.d((*(*arg2 + 0x7c))()))
    
    if (eax_12 == 0 || result.b != 0)
        int32_t eax_18 = (*(*arg2 + 0x50))()
        
        if (eax_18 != 0)
            void* edi_3 = *(*(*arg2 + 0x50))()
            result = (*(edi_3 + 0x2c))(2, ebp, 1, zx.d((*(*arg2 + 0x6c))()))
        
        if (eax_18 == 0 || result.b != 0)
            int32_t eax_24 = (*(*arg2 + 0x4c))()
            
            if (eax_24 != 0)
                void* edi_4 = *(*(*arg2 + 0x4c))()
                result = (*(edi_4 + 0x2c))(3, ebp, 1, zx.d((*(*arg2 + 0x68))()))
            
            if (eax_24 == 0 || result.b != 0)
                if ((*(*arg2 + 0x54))() == 0)
                    result.b = 1
                    return result
                
                void* edi_5 = *(*(*arg2 + 0x54))()
                
                if ((*(edi_5 + 0x2c))(4, ebp, 1, zx.d((*(*arg2 + 0x70))())).b != 0)
                    result.b = 1
                    return result

result.b = 0
return result
