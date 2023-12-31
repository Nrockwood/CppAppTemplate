////////////////////////////////////////////////////////////
///  @file IExampleInterface.h
///  @author rockwood
///  @brief Example Interface
///  @version 0.1
///  @date 2022-11-08
///  
///  @copyright Copyright (c) 2022
///  
////////////////////////////////////////////////////////////

#ifndef INCLUDE_IEXAMPLEINTERFACE_H_
#define INCLUDE_IEXAMPLEINTERFACE_H_

namespace foo
{

////////////////////////////////////////////////////////////
///  @brief Interface Example Class
///  
////////////////////////////////////////////////////////////
template<typename Datatype>
class IExampleInterface
{
    public:
        ////////////////////////////////////////////////////////////
        ///  @brief Destroy the IExampleInterface object
        ///  
        ////////////////////////////////////////////////////////////
        virtual ~IExampleInterface() = default;

        ////////////////////////////////////////////////////////////
        ///  @brief Initialize all necessary members for this app.
        ///  
        ////////////////////////////////////////////////////////////
        virtual void initApp() = 0;

        ////////////////////////////////////////////////////////////
        ///  @brief Execute the logic of this app when called upon.
        ///  
        ////////////////////////////////////////////////////////////
        virtual void run() = 0;

        ////////////////////////////////////////////////////////////
        ///  @brief Returns the current time as a Datatype
        ///  
        ///  @return Datatype 
        ////////////////////////////////////////////////////////////
        virtual Datatype currentTime() = 0;
};

} // namespace foo

#endif // INCLUDE_IEXAMPLEINTERFACE_H_
