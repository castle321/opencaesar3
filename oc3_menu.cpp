#include "oc3_menu.h"
#include "oc3_pushbutton.h"
#include "picture.hpp"
#include "sdl_facade.hpp"
#include "pic_loader.hpp"
#include "oc3_resourcegroup.h"

class Menu::Impl
{
public:
    Picture* bgPicture;

    PushButton* menuButton;
    PushButton* minimizeButton;
    PushButton* senateButton;
    PushButton* empireButton;
    PushButton* missionButton;
    PushButton* northButton;
    PushButton* rotateLeftButton;
    PushButton* rotateRightButton;
    PushButton* messageButton;
    PushButton* disasterButton;
    PushButton* houseButton;
    PushButton* waterButton;
    PushButton* clearButton;
    PushButton* roadButton;
    PushButton* administrationButton;
    PushButton* entertainmentButton;
    PushButton* educationButton;
    PushButton* templeButton;
    PushButton* commerceButton;
    PushButton* securityButton;
    PushButton* healthButton;
    PushButton* engineerButton;
    PushButton* cancelButton;
};

void configureButton(PushButton* oButton, const int pic_index)
{
    PicLoader& loader = PicLoader::instance();
    oButton->setPicture( &loader.get_picture( ResourceGroup::panelBackground, pic_index), stNormal );
    oButton->setPicture( &loader.get_picture( ResourceGroup::panelBackground, pic_index+1), stHovered );
    oButton->setPicture( &loader.get_picture( ResourceGroup::panelBackground, pic_index+2), stPressed );
    oButton->setPicture( &loader.get_picture( ResourceGroup::panelBackground, pic_index+3), stDisabled );
}

Menu::Menu( Widget* parent, int id, const Rect& rectangle ) : Widget( parent, id, rectangle ), _d( new Impl )
{
    // // top of menu
    //_menuButton.setText("Menu");
    //_menuButton.setEvent(WidgetEvent::InGameMenuEvent());
    //_menuButton.setNormalPicture(PicLoader::instance().get_picture("paneling", 234));
    //_menuButton.setHoverPicture(PicLoader::instance().get_picture("paneling", 234+1));
    //_menuButton.setSelectedPicture(PicLoader::instance().get_picture("paneling", 234+2));
    //_menuButton.setUnavailablePicture(PicLoader::instance().get_picture("paneling", 234+3));
    //_menuButton.init_pictures();
    //add_widget(_menuButton);

    Point offset( 1, 32 );
    int dy = 35;
    _d->minimizeButton = new PushButton( this, Rect( 0, 0, 31, 20) );
    configureButton( _d->minimizeButton, ResourceGroup::maximazeBtnPicId );
    _d->minimizeButton->setPosition( Point( 6, 4 ));

    // //
    // _midIcon.setPicture(PicLoader::instance().get_picture("panelwindows", 1));
    // _midIcon.setPosition(8, 217);
    // add_widget(_midIcon);

    //_bottomIcon.setPicture(PicLoader::instance().get_picture("paneling", 20));
    //_bottomIcon.setPosition(0, _bgPicture->get_surface()->h);
    //add_widget(_bottomIcon);

    // // header
    // set3Button(_senateButton, WidgetEvent(), 79);
    // set3Button(_empireButton, WidgetEvent(), 82);
    // set3Button(_missionButton, WidgetEvent(), 85);
    // set3Button(_northButton, WidgetEvent(), 88);
    // set3Button(_rotateLeftButton, WidgetEvent(), 91);
    // set3Button(_rotateRightButton, WidgetEvent(), 94);

//     configureButton(_d->houseButton, /*WidgetEvent::BuildingEvent(B_HOUSE),*/ 123);
//     _d->houseButton->setPosition( offset + Point( 0, dy * 0 ) );
// 
//     configureButton(_d->clearButton, /*WidgetEvent::ClearLandEvent(),*/ 131);
//     _d->clearButton->setPosition( offset + Point( 0, dy * 1 ) );
// 
//     configureButton(_d->roadButton, /*WidgetEvent::BuildingEvent(B_ROAD),*/ 135);
//     _d->roadButton->setPosition( offset + Point( 0, dy * 2 ) );
//     // second row
//     configureButton(_d->waterButton, /*WidgetEvent::BuildMenuEvent(BM_WATER),*/ 127);
//     _d->waterButton->setPosition( offset + Point( 0, dy * 3 ));
// 
//     configureButton(_d->healthButton,/* WidgetEvent::BuildMenuEvent(BM_HEALTH),*/ 163);
//     _d->healthButton->setPosition( offset + Point( 0, dy * 4 ) );
// 
//     configureButton(_d->templeButton, /*WidgetEvent::BuildMenuEvent(BM_RELIGION),*/ 151);
//     _d->templeButton->setPosition( offset + Point( 0, dy * 5 ) );
//     // third row
//     configureButton(_d->educationButton, /*WidgetEvent::BuildMenuEvent(BM_EDUCATION),*/ 147);
//     _d->educationButton->setPosition( offset + Point( 0, dy * 6 ) );
// 
//     configureButton(_d->entertainmentButton, /*WidgetEvent::BuildMenuEvent(BM_ENTERTAINMENT),*/ 143);
//     _d->entertainmentButton->setPosition( offset + Point( 0, dy * 7 ) );
// 
//     configureButton(_d->administrationButton, /*WidgetEvent::BuildMenuEvent(BM_ADMINISTRATION),*/ 139);
//     _d->administrationButton->setPosition( offset + Point( 0, dy * 8 ) );
//     // 4th row
//     configureButton(_d->engineerButton, /*WidgetEvent::BuildMenuEvent(BM_ENGINEERING),*/ 167);
//     _d->engineerButton->setPosition( offset + Point( 0, dy * 9 ) );
// 
//     configureButton(_d->securityButton, /*WidgetEvent::BuildMenuEvent(BM_SECURITY),*/ 159);
//     _d->securityButton->setPosition( offset + Point( 0, dy * 10 ) );
// 
//     configureButton(_d->commerceButton, /*WidgetEvent::BuildMenuEvent(BM_COMMERCE),*/ 155);
//     _d->commerceButton->setPosition( offset + Point( 0, dy * 11 ) );

    //   // 5th row
    //   set4Button(_cancelButton, WidgetEvent(), 171);
    //   set4Button(_messageButton, WidgetEvent(), 115);
    //   set4Button(_disasterButton, WidgetEvent(), 119);

    // set button position
    // _menuButton.setPosition(4, 3);
    // _minimizeButton.setPosition(127, 5);
    // header
    // _senateButton.setPosition(7, 155);
    // _empireButton.setPosition(84, 155);
    // _missionButton.setPosition(7, 184);
    // _northButton.setPosition(46, 184);
    // _rotateLeftButton.setPosition(84, 184);
    // _rotateRightButton.setPosition(123, 184);



    //   // 5th row
    //   _cancelButton.setPosition(x0, y0+dy*12);
    //   _messageButton.setPosition(x0, y0+dy*13);
    //   _disasterButton.setPosition(x0, y0+dy*14);

    //   _bgPicture = &PicLoader::instance().get_picture("paneling", 17);
    //   setSize(_bgPicture->get_surface()->w, _bgPicture->get_surface()->h);
    //
    //   // top of menu
    //   _menuButton.setText("Menu");
    //   _menuButton.setEvent(WidgetEvent::InGameMenuEvent());
    //   _menuButton.setNormalPicture(PicLoader::instance().get_picture("paneling", 234));
    //   _menuButton.setHoverPicture(PicLoader::instance().get_picture("paneling", 234+1));
    //   _menuButton.setSelectedPicture(PicLoader::instance().get_picture("paneling", 234+2));
    //   _menuButton.setUnavailablePicture(PicLoader::instance().get_picture("paneling", 234+3));
    //   _menuButton.init_pictures();
    //   add_widget(_menuButton);
    //
    //   set4Button(_minimizeButton, WidgetEvent(), 97);
    //
    //   //
    //   _midIcon.setPicture(PicLoader::instance().get_picture("panelwindows", 1));
    //   _midIcon.setPosition(8, 217);
    //   add_widget(_midIcon);
    //
    //   //_bottomIcon.setPicture(PicLoader::instance().get_picture("paneling", 20));
    //   //_bottomIcon.setPosition(0, _bgPicture->get_surface()->h);
    //   //add_widget(_bottomIcon);
    //
    //   // header
    //   set3Button(_senateButton, WidgetEvent(), 79);
    //   set3Button(_empireButton, WidgetEvent(), 82);
    //   set3Button(_missionButton, WidgetEvent(), 85);
    //   set3Button(_northButton, WidgetEvent(), 88);
    //   set3Button(_rotateLeftButton, WidgetEvent(), 91);
    //   set3Button(_rotateRightButton, WidgetEvent(), 94);
    //
    //   set4Button(_houseButton, WidgetEvent::BuildingEvent(B_HOUSE), 123);
    //   set4Button(_clearButton, WidgetEvent::ClearLandEvent(), 131);
    //   set4Button(_roadButton, WidgetEvent::BuildingEvent(B_ROAD), 135);
    //   // second row
    //   set4Button(_waterButton, WidgetEvent::BuildMenuEvent(BM_WATER), 127);
    //   set4Button(_healthButton, WidgetEvent::BuildMenuEvent(BM_HEALTH), 163);
    //   set4Button(_templeButton, WidgetEvent::BuildMenuEvent(BM_TEMPLE), 151);
    //   // third row
    //   set4Button(_educationButton, WidgetEvent::BuildMenuEvent(BM_EDUCATION), 147);
    //   set4Button(_entertainmentButton, WidgetEvent::BuildMenuEvent(BM_ENTERTAINMENT), 143);
    //   set4Button(_administrationButton, WidgetEvent::BuildMenuEvent(BM_ADMINISTRATION), 139);
    //   // 4th row
    //   set4Button(_engineerButton, WidgetEvent::BuildMenuEvent(BM_ENGINEERING), 167);
    //   set4Button(_securityButton, WidgetEvent::BuildMenuEvent(BM_SECURITY), 159);
    //   set4Button(_commerceButton, WidgetEvent::BuildMenuEvent(BM_COMMERCE), 155);
    //   // 5th row
    //   set4Button(_cancelButton, WidgetEvent(), 171);
    //   set4Button(_messageButton, WidgetEvent(), 115);
    //   set4Button(_disasterButton, WidgetEvent(), 119);
    //
    //   // set button position
    //   _menuButton.setPosition(4, 3);
    //   _minimizeButton.setPosition(127, 5);
    //   // header
    //   _senateButton.setPosition(7, 155);
    //   _empireButton.setPosition(84, 155);
    //   _missionButton.setPosition(7, 184);
    //   _northButton.setPosition(46, 184);
    //   _rotateLeftButton.setPosition(84, 184);
    //   _rotateRightButton.setPosition(123, 184);
    //   // first row
    //   _houseButton.setPosition(13, 277);
    //   _clearButton.setPosition(63, 277);
    //   _roadButton.setPosition(113, 277);
    //   // second row
    //   _waterButton.setPosition(13, 313);
    //   _healthButton.setPosition(63, 313);
    //   _templeButton.setPosition(113, 313);
    //   // third row
    //   _educationButton.setPosition(13, 349);
    //   _entertainmentButton.setPosition(63, 349);
    //   _administrationButton.setPosition(113, 349);
    //   // 4th row
    //   _engineerButton.setPosition(13, 385);
    //   _securityButton.setPosition(63, 385);
    //   _commerceButton.setPosition(113, 385);
    //   // 5th row
    //   _cancelButton.setPosition(13, 421);
    //   _messageButton.setPosition(63, 421);
    //   _disasterButton.setPosition(113, 421);
}

void Menu::draw( GfxEngine& painter )
{
    if( !isVisible() )
        return;

    painter.drawPicture( *_d->bgPicture, getScreenLeft(), getScreenTop() );
    
    Widget::draw( painter );
}

void Menu::unselect()
{
}

MenuPtr Menu::create( Widget* parent, int id )
{
	MenuPtr ret( new Menu( parent, id, Rect( 0, 0, 1, 1 ) ) );

    SdlFacade &sdlFacade = SdlFacade::instance();

    const Picture& bground = PicLoader::instance().get_picture( ResourceGroup::panelBackground, 16 );
    const Picture& bottom = PicLoader::instance().get_picture( ResourceGroup::panelBackground, 21 );

    ret->_d->bgPicture = &sdlFacade.createPicture( bground.get_width(), bground.get_height() + bottom.get_height() );
    sdlFacade.drawPicture( bground, *ret->_d->bgPicture , 0, 0);
    sdlFacade.drawPicture( bottom, *ret->_d->bgPicture , 0, bground.get_height() );

    ret->setGeometry( Rect( 0, 0, bground.get_width(), ret->_d->bgPicture->get_height() ) );

	return ret;
}