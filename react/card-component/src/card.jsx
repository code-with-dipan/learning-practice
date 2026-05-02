import profilepic from "./assets/profilepic.webp"
function Card(){
    return(
        <div className="card">
            <img className="card-image" src={profilepic} alt="profile picture" />
            <h2 className="card-title">Dipan</h2>
            <p className="card-description">i love making video games</p>
        </div>
    );
}
export default Card ;