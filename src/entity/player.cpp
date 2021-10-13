#include "player.hpp"

#include <gl/mesh.hpp>
#include <gl/texture.hpp>
#include <main/application.hpp>

namespace ent {

Player::Player(double x, double y, Application * app)
: Entity(x, y) {
    app->player = this;
}

void Player::render() {
    tex::render_texture(
        x, y, WIDTH, HEIGHT, tex::RenderBasis::BOTTOM_LEFT, tex::PLAYER_TEX.get()
    );
}

}
